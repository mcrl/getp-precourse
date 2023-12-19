import tracemalloc
import numpy as np
from timeit import Timer

# Flag to determine if we select NumPy domain
use_np_domain = True

B, H, W = 100, 30, 30

def cov_images_base(A, debug=False):
    '''
    Calculate covariance matrix of given images
    ===================================================
    Arguments:
        + A: numpy array of shape (B,H,W) with multiple images concated
        + debug: if True, detailed information about memory allocation is printed.
    Outputs:
        + covs: covariance matrix of A
        + total_mem: memory allocated by numpy
    '''
    # Start to trace memory
    tracemalloc.start()

    # Clear traces of memory blocks allocated by Python
    # before moving to the next section.
    tracemalloc.clear_traces()

    covs = []
    norm_A = []
    for a in A:
      a = a.flatten()
      mean_a = np.mean(a)
      mean_a = np.broadcast_to(mean_a, a.shape)
      norm_a = a - mean_a
      norm_A.append(norm_a)
    norm_A = np.array(norm_A)
    covs = np.matmul(norm_A, norm_A.T)

    snapshot = tracemalloc.take_snapshot()
    np_domain = np.lib.tracemalloc_domain
    dom_filter = tracemalloc.DomainFilter(inclusive=use_np_domain,
                                      domain=np_domain)
    snapshot = snapshot.filter_traces([dom_filter])
    top_stats = snapshot.statistics('traceback')

    total_mem = 0
    for stat in top_stats:
        total_mem += stat.size / 1024
    if debug:
        print()
        print("================ SNAPSHOT =================")
        for stat in top_stats:
            print(f"{stat.count} memory blocks: {stat.size / 1024:.1f} KiB")
            print(stat.traceback.format()[-1])
        print(f"Total Mem: {total_mem} KiB")

    tracemalloc.stop()

    return covs, total_mem

def cov_images_optim(A, debug=False):
    '''
    Calculate covariance matrix of given images
    ===================================================
    Arguments:
        + A: numpy array of shape (B,H,W) with multiple images concated
        + debug: if True, detailed information about memory allocation is printed.
    Outputs:
        + covs: covariance matrix of A
        + total_mem: memory allocated by numpy
    '''
    # Start to trace memory
    tracemalloc.start()

    # Clear traces of memory blocks allocated by Python
    # before moving to the next section.
    tracemalloc.clear_traces()

    ### TODO: fill in here ###
    A = A.reshape(B, -1, order='A')             # (1) flatten -> reshape, (2) order='A' to keep column major
    A -= np.mean(A, axis=1, keepdims=True)      # (3) broadcasting
    covs = np.matmul(A, A.T)                    # Transpose(T) only changes the view, so you can use it
    ##########################

    snapshot = tracemalloc.take_snapshot()
    np_domain = np.lib.tracemalloc_domain
    dom_filter = tracemalloc.DomainFilter(inclusive=use_np_domain,
                                      domain=np_domain)
    snapshot = snapshot.filter_traces([dom_filter])
    top_stats = snapshot.statistics('traceback')

    total_mem = 0
    for stat in top_stats:
        total_mem += stat.size / 1024
    if debug:
        print()
        print("================ SNAPSHOT =================")
        for stat in top_stats:
            print(f"{stat.count} memory blocks: {stat.size / 1024:.1f} KiB")
            print(stat.traceback.format()[-1])
        print(f"Total Mem: {total_mem} KiB")

    tracemalloc.stop()

    return covs, total_mem

def main():
    debug=False
    A = np.asfortranarray(np.random.rand(B, H, W))
    answer, base_mem = cov_images_base(A, debug)
    output, mem = cov_images_optim(A, debug)
    assert np.linalg.norm(answer - output) < 1e-9, f"Wrong Answer, Diff: {np.linalg.norm(answer - output)}"
    assert base_mem * 0.1 > mem, f"Too many memory usage, Base: {base_mem} / You: {mem}"

    t = Timer(lambda: cov_images_base(A, False))
    base_inf_time = t.timeit(number=100)

    t = Timer(lambda: cov_images_optim(A, False))
    inf_time = t.timeit(number=100)

    assert base_inf_time * 0.15 > inf_time, f"Too slow, Base: {base_inf_time} / You: {inf_time}"

    print("Success!!")

if __name__ == '__main__':
    main()
