// main.cpp
#include "KMeans.h"

int main() {
    // Set the initial parameters

    int num_points = 50;  // Number of data points
    int k = 4;            // Number of clusters
    int max_iterations = 100;  // Maximum number of iterations for the K-means algorithm

    // Create a KMeans object with the specified parameters
    KMeans kmeans(num_points, k);

    // Run the K-means algorithm with the specified maximum iterations
    kmeans.run(max_iterations);

    // Exit the program
    return 0;
}
