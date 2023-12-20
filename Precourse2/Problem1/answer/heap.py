class MinHeap:
    def __init__(self):
        self.heap = []

    def push(self, value):
        self.heap.append(value)
        self.heapify()

    def pop(self):
        if len(self.heap) == 0:
            raise IndexError("pop from empty heap")
        if len(self.heap) == 1:
            return self.heap.pop()

        root = self.heap[0]
        self.heap[0] = self.heap.pop()
        self.heapify()

        return root

    def heapify(self):
        index = len(self.heap) - 1

        while index > 0:
            parent_index = (index - 1) // 2
            if self.heap[index] < self.heap[parent_index]:
                self.heap[index], self.heap[parent_index] = (
                    self.heap[parent_index],
                    self.heap[index],
                )
                index = parent_index
            else:
                break

        index = 0
        while True:
            smallest = index
            left_child_index = 2 * index + 1
            right_child_index = 2 * index + 2

            if (
                left_child_index < len(self.heap)
                and self.heap[left_child_index] < self.heap[smallest]
            ):
                smallest = left_child_index

            if (
                right_child_index < len(self.heap)
                and self.heap[right_child_index] < self.heap[smallest]
            ):
                smallest = right_child_index

            if smallest != index:
                self.heap[index], self.heap[smallest] = (
                    self.heap[smallest],
                    self.heap[index],
                )
                index = smallest
            else:
                break



if __name__ == "__main__":
    min_heap = MinHeap()

    with open('input_heap.txt', 'r') as file:
        lines = file.readlines()
        for line in lines:
            value = int(line.strip())
            min_heap.push(value)

    print("Min heap : ", min_heap.heap)
