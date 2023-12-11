# Problem 1 : Dijkstra

## Problem 1-1 : Implement Heap 
### Overview 
The following table shows the API of our custom MinHeap:

| API function | Description |
|:---          |:---         |
| `push(self, value)`| Push the value onto the heap, maintaining the heap invariant. |
| `pop(self)`| Pop and return the smallest item from the heap, maintaining the heap invariant. If the heap is empty, IndexError is raised. |
| `heapify(self)`| Transform list into a heap.|

### TODO : Implement functions in heap.py
* push(self, value)
* pop(self)
* heapify(self)

### Output
```
$ python heap.py
Min heap :  [2, 3, 6, 5, 4, 20, 10, 15, 9, 8]
```

## Problem 1-2 : Implement Dijkstra
### Overview 
Dijkstra's algorithm is an algorithm for finding the shortest paths between nodes in a weighted graph, which may represent, for example, road networks. 
The following table shows the API of our custom Dijkstra:
| API function | Description |
|:---          |:---         |
| `dijkstra(graph, start)`| Fix a single node as the start node and find shortest paths from the start to all other nodes in the graph. |

### TODO : Implement an operation in dijkstra.py
* dijkstra()

### Output
```
$ python dijkstra.py
Start Node: A
Shortest distances: {'A': 0, 'B': 5, 'C': 3, 'D': 6, 'E': 9, 'F': 11}
```
