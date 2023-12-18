# Problem1-1 : getp::list



## Setup
```
make
```

## Execution
```
ta@login:~/list$ make run
./main
Test 1: Default constructor - size: 0
List elements: []
-----------------------------------------
Test 2: Initializer list constructor - size: 5
List elements: [1 2 3 4 5 ]
-----------------------------------------
Test 3: Copy constructor - size: 5
List elements: [1 2 3 4 5 ]
-----------------------------------------
Test 4: push_back - size: 6
List elements: [1 2 3 4 5 6 ]
-----------------------------------------
Test 5: emplace_back - size: 7
List elements: [1 2 3 4 5 6 7 ]
-----------------------------------------
Test 6: push_front - size: 8
List elements: [0 1 2 3 4 5 6 7 ]
-----------------------------------------
Test 7: emplace_front - size: 9
List elements: [-1 0 1 2 3 4 5 6 7 ]
-----------------------------------------
Test 8: pop_back - size: 8
List elements: [-1 0 1 2 3 4 5 6 ]
-----------------------------------------
Test 9: pop_front - size: 7
List elements: [0 1 2 3 4 5 6 ]
-----------------------------------------
Test 10: Iterators - values: 0 1 2 3 4 5 6 
-----------------------------------------
Test 11: Clear - size: 0
List elements: []
All tests passed successfully!

```

## TODO : Implement getp::list

### Constructors and Destructors
| Member Function    | Description                         |
|---------------------|-------------------------------------|
| (constructor)       | Constructs the list                 |
| (destructor)        | Destructs the list                  |

### Assignment
| Member Function    | Description                         |
|---------------------|-------------------------------------|
| operator=           | Assigns values to the container     |

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

### Modifiers
| Member Function    | Description                         |
|---------------------|-------------------------------------|
| clear               | Clears the contents                 |
| push_back           | Adds an element to the end          |
| push_front          | Inserts an element to the beginning |
| pop_back            | Removes the last element            |
| pop_front           | Removes the first element           |
| emplace_back        | Constructs an element in-place at the end|
| emplace_front       | Constructs an element in-place at the beginning|

### Capacity
| Member Function    | Description                         |
|---------------------|-------------------------------------|
| size                | Returns the number of elements      |


### Other operations
| Member Function    | Description                         |
|---------------------|-------------------------------------|
| print               | Print all elements             |
