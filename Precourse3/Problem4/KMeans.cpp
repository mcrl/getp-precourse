// KMeans.cpp
#include "KMeans.h"
#include "Point.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <random>

// TODO: Fix the random seed to ensure consistent results across different program executions.

KMeans::KMeans(int num_points, int k) : k(k) {
    generateRandomDataPoints(num_points);
    initializeCentroids();
}

void KMeans::initializeCentroids() {
     // TODO: Implement this function
    // Initialize the centroids of clusters randomly.
}

void KMeans::generateRandomDataPoints(int num_points) {
    // TODO: Implement this function
    // Generate a given number of random data points within a specified range ( 0< x, y<50)
}

void KMeans::assignToClusters() {
    // TODO: Implement this function
    // Assign each point to a cluster of the nearest centroid
}

void KMeans::updateCentroids() {
    // TODO: Implement this function
    // Update the centroids of clusters based on the current assignment of data points.
}

double KMeans::calculateDistance(const Point& p1, const Point& p2) {
    return std::sqrt(std::pow(p1.x - p2.x, 2) + std::pow(p1.y - p2.y, 2));
}

void KMeans::run(int max_iterations) {
    // TODO: Implement K-means algorithm and print the coordinates of each cluster centroid After the maximum number of iterations


}
