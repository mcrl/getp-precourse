# Problem 4
**Assignment Title: Implementation of K-means Clustering in C++**

K-Means clustering is one of the unsupervised learning algorithms that divides data into K groups or clusters. Each cluster is formed based on the similarity of the data, and the center of each cluster is calculated as the average of all data points in that cluster.
The algorithm operates as follows:
* **Initialization**: Initialize K cluster centers. The initial cluster centers can be randomly selected from data points or chosen according to a specific strategy.
* **Assignment**: Assign each data point to the nearest cluster center. The closest cluster is determined using a distance measurement method such as Euclidean distance.
* **Update**: Recalculate new cluster centers based on the data points assigned to each cluster. This is done by computing the average of data points in each cluster.
* **Iteration**: Repeat the assignment and update steps until the cluster centers no longer change significantly, or until a pre-defined maximum number of iterations is reached.

### Assignment Objectives:

* Implement and apply the K-means algorithm to randomly generated points when the number of data points, number of clusters, and maximum iterations are given. 
* Print the coordinates of each cluster centroid after a specified maximum number of iterations.
### Assignment Instructions:
* **Modify KMeans.h and KMeans.cpp Files Only**: Implement the K-Means clustering algorithm by making modifications only to the KMeans.h and KMeans.cpp files. Do not alter any other files, and complete the entire program using these two files.
* **Function Modification and Parameter Changes Allowed**: You are allowed to modify the input parameters and other aspects of functions. Feel free to change the return type of functions or introduce additional parameters as needed. However, the fundamental structure of the class should remain intact.
* **Fix Random Seed**: Fix the random seed to ensure consistent results across different program executions. Initialize the random seed during program initialization and use it for random data and cluster initialization.
