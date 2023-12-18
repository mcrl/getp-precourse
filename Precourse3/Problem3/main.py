import numpy as np
import time 
import matmul_c

M = 256
N = 256
K = 256

# Naive matrix multiplication
def matmul_python(A,B,C,M,N,K):
  for i in range(M):
    for k in range(K):
      tmp = A[i * K + k]
      for j in range(N):
        C[i * N + j] +=  tmp * B[k * N + j]


def c_python_comparison():

  # Matrix initilization
  A = np.random.rand(M*K).astype(np.float32)
  B = np.random.rand(K*N).astype(np.float32)
  C1 = np.zeros(M*N).astype(np.float32)
  C2 = np.zeros(M*N).astype(np.float32)

  # Call matmul in c
  start_c = time.time()
  matmul_c.matmul_c_interface(A,B,C1,M,N,K)
  end_c = time.time()

  # Call matmul in python
  start_python = time.time()
  matmul_python(A,B,C2,M,N,K)
  end_python = time.time()

  print("Calculation in C : {} sec".format(end_c - start_c))

  print("Calculation in python : {} sec".format(end_python - start_python))


if __name__ == "__main__":
  c_python_comparison()
