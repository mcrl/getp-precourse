# Problem1-2 : getp::vector



## Setup
```
make
```

## Execution
```
ta@login:~/vector$ make run
./main
Test 1: Constructor, push_back
Vector elements using operator[]: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
-----------------------------------------
Test 2: operator[]
Vector elements using operator[]: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
-----------------------------------------
Test 3: at (including exception situation)
Accessing elements using at(): [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, Exception: Index out of range
-----------------------------------------
Test 4: front, back
Front element: 1
Back element: 10
-----------------------------------------
Test 5: data
Vector elements using data(): [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
-----------------------------------------
Test 6: Iterators
Vector elements using iterators: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
-----------------------------------------
Test 7: Reverse Iterators
Vector elements using reverse iterators: [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
-----------------------------------------
Test 8: emplace_back
Vector elements after modifications: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]
-----------------------------------------
Test 9: pop_back
Vector elements after pop_back: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]
-----------------------------------------
Test 10: reserve
Vector elements after reserve: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]
-----------------------------------------
All tests completed.
```

## TODO : Implement getp::vector

### Constructors and Destructors
| Member Function    | Description                         |
|---------------------|-------------------------------------|
| (constructor)       | Constructs the list                 |
| (destructor)        | Destructs the list                  |

### Assignment
| Member Function    | Description                         |
|---------------------|-------------------------------------|
| operator=           | Assigns values to the container     |

### Accessing Elements
| Member Function | Description                               |
|------------------|-------------------------------------------|
| at               | Access specified element with bounds checking  (public member function) |
| operator[]       | Access specified element                 (public member function) |
| front            | Access the first element                  (public member function) |
| back             | Access the last element                   (public member function) |
| data             | Direct access to the underlying array     (public member function) |

### Capacity
| Member Function    | Description                         |
|---------------------|-------------------------------------|
| getSize              | Returns the number of elements      |
| reserve | reserves storage |

### Modifiers
| Member Function    | Description                         |
|---------------------|-------------------------------------|
| clear               | Clears the contents                 |
| push_back           | Adds an element to the end          |
| emplace_back        | Constructs an element in-place at the end|
| append_range | adds a range of elements to the end |
| pop_back            | Removes the last element            |
| pop_front           | Removes the first element           |

### Iterators
| Member Function    | Description                         |
|---------------------|-------------------------------------|
| begin               | Returns an iterator to the beginning|
| end               | Returns an iterator to the end|
| cbegin              | Returns a constant iterator to the beginning|
| cend              | Returns a constant iterator to the end|
| rbegin               | Returns a reverse iterator to the beginning|
| rend               | Returns a reverse iterator to the end|
| crbegin              | Returns a constant reverse iterator to the beginning|
| crend              | Returns a constant reverse iterator to the end|
