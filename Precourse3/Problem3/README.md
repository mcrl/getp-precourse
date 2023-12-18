# Problem3 : Integrate C/C++ code to Python program using pybind11


## Template
* matmul.cpp : C style matrix multiplication code (Add your code here)
* main.py : Initialize data and call matrix multiplication (Do not edit)

## Setup
```
$ pip install pybind11 // (or conda install pybind11)


// You can check Python_Standard_Library_PATH with below shell command
// $ python -c "import sys; print('\n'.join(sys.path))"

$ g++ -O3 -Wall -shared -std=c++11 -fPIC \
      -I$Your_Python_Standard_Library_PATH \
      $(python3 -m pybind11 --includes) \
      matmul.cpp -o matmul_c$(python-config --extension-suffix)

```

## Execution
```
python main.py
```

## Instructions 
To improve the performance of Python programs, C/C++ code integration to performance-sensitive parts is one of the widely used techniques in Python. There are many integration methods and this time, we will try to practice the pybind11 library. 

We provide 2 template codes. main.py is the entry point of the program and matmul.cpp is naive matrix multiplication in C. 

### TODO : Implement Python-C/C++ interface code using pybind11

* Our final purpose is calling the matmul_c function from main.py
* You can only add your code to matmul.cpp (Do not edit main.py itself)
* Hint: From the imported library name and interface name in main.py, you can infer how to consist interface code in C (https://pybind11.readthedocs.io/en/stable/basics.html)

As a result, even in a naive implementation, you can check the performance of the C/C++ code is much faster than Python.


