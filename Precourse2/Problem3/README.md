# Optimizing Covariance Computation

Covariance matrix is a square matrix giving the covariance between each pair of elements. The covariance matrix of a 1-channel images can be computed as follows:

$$
V_i = flatten(I_i)
$$

$$
V_i = V_i - \mathbb{E}[V_i]
$$

$$
Cov[i,j] = V_i \times V_j^T
$$

Here, $flatten$ is a function that vectorizes the image, reshaping $(H,W)$ to $(H\cdot W)$, and $\times$ is an outer product. Thus, the covariance matrix of an images of shape $(H,W)$ has the shape $(B, B)$. 

We provide a function that computes the sum of the covariance of several 1-channel images using numpy library. The function takes as input $A = [I_1, I_2, ..., I_B]$, a concatenation of a set of $B$ images. However, the provided function is inefficiently implemented because it does not consider numpy's memory management or broadcasting.

In this problem, the goal is to improve memory usage and execution time of the function regarding the characteristics of numpy library. A concatenation of 100 images is given as input. Each image has a size of $(30, 30)$. The result of the optimized function should not be different from the original. We aim to use less than 10\% of the memory and achieve less than 15\% of the inference time compared to the original. Therefore, we need to optimize the function to achieve better performance. To optimize, you can reference following documents:

+ [Copies and Views](https://numpy.org/doc/stable/user/basics.copies.html)
+ [numpy.shares\_memory](https://numpy.org/doc/stable/reference/generated/numpy.shares_memory.html)
+ [Broadcasting](https://numpy.org/doc/stable/user/basics.broadcasting.html)

Do not allow any third-party packages such as opencv, torchvision except for numpy: you have to implement in numpy, instead of just calling third-party libraries
