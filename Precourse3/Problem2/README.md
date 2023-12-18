# Problem2 : Code Puzzle, What the problem is ?


## Template 
* main.c : Prototype book library management code 


## Setup
```
gcc main.c -o main
```

## Execution
```
./main
```

## Instructions 
You try to make a book library management program and main.c is a prototype code.

The book struct contains 54 bytes of data (30 bytes for title, 16 bytes for author, 4 bytes for volume_number and 4 bytes for ISBN).

To save the data, it support serialize and deserialize functions. (dump data to file)

But when you make a backup instance of the library, the code is not working properly.

You may take following problems in main() functions
* Your backup file may larger than expected size (the_number_of_books × 54 bytes)
* When deserialize data from file, some value may changed 

### TODO : Describe what is the problems and how to debug this code to work properly
* Write down your opinion about why this bug happened in a few sentences
* Rewrite the main.c to prevent unnecessary file size overhead and complete the implementation of serialization and de-serialization
