class MinHeap:
    def __init__(self):
        self.heap = []

    def push(self, value):
        # TODO : FILL IN HERE

    def pop(self):
        # TODO : FILL IN HERE

    def heapify(self):
        # TODO : FILL IN HERE

if __name__ == "__main__":
    min_heap = MinHeap()

    with open('input_heap.txt', 'r') as file:
        lines = file.readlines()
        for line in lines:
            value = int(line.strip())
            min_heap.push(value)

    print("Min heap : ", min_heap.heap)
