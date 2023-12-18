#include <pybind11/pybind11.h>
#include <pybind11/numpy.h>

namespace py = pybind11;

// Naive Matrix Multiplication
// C[MxN] = A[MxK] @ B[KxN]
// Do not remove or modify this definitions 
void matmul_c(float* A, float* B, float* C, int M, int N, int K){

  for (int i = 0 ; i < M ; ++i)
  {
    for (int k = 0 ; k < K ; ++k)
    {
      float tmp = A[i * K + k];
      for (int j = 0 ; j < N ; ++j)
      {
        C[i * N + j] += tmp * B[k * N + j];
      }
    }
  }
}

/*


Write your code here


*/
