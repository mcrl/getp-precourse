// KMeans.cpp
#include "KMeans.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <random>

unsigned int seed = 42;
std::mt19937 rng(seed);

KMeans::KMeans(int num_points, int k) : k(k) {
    generateRandomDataPoints(num_points);
    initializeCentroids();
}

void KMeans::initializeCentroids() {
    std::uniform_real_distribution<double> distribution(0, 50);

    centroids.clear(); 

    for (int i = 0; i < k; ++i) {
        double x = distribution(rng);
        double y = distribution(rng);
        centroids.push_back(Point(x, y));
    }
}

void KMeans::generateRandomDataPoints(int num_points) {
    std::uniform_real_distribution<double> distribution(0, 50);

    data_points.clear();

    for (int i = 0; i < num_points; ++i) {
        double x = distribution(rng);
        double y = distribution(rng);
        data_points.push_back(Point(x, y));
    }
}

void KMeans::assignToClusters() {
    clusters.clear();

    for (const auto& point : data_points) {
        double min_distance = std::numeric_limits<double>::max();
        int min_index = -1;

        for (int i = 0; i < k; ++i) {
            double distance = calculateDistance(point, centroids[i]);
            if (distance < min_distance) {
                min_distance = distance;
                min_index = i;
            }
        }

        clusters.push_back(min_index);
    }
}

void KMeans::updateCentroids() {
    std::vector<int> cluster_sizes(k, 0);
    std::vector<Point> new_centroids(k, Point(0, 0));

    for (size_t i = 0; i < data_points.size(); ++i) {
        int cluster_index = clusters[i];
        new_centroids[cluster_index].x += data_points[i].x;
        new_centroids[cluster_index].y += data_points[i].y;
        cluster_sizes[cluster_index]++;
    }

    for (int i = 0; i < k; ++i) {
        if (cluster_sizes[i] > 0) {
            new_centroids[i].x /= cluster_sizes[i];
            new_centroids[i].y /= cluster_sizes[i];
        }
    }

    centroids = new_centroids;
}

double KMeans::calculateDistance(const Point& p1, const Point& p2) {
    return std::sqrt(std::pow(p1.x - p2.x, 2) + std::pow(p1.y - p2.y, 2));
}

void KMeans::run(int max_iterations) {
    for (int iteration = 0; iteration < max_iterations; ++iteration) {
        assignToClusters();
        updateCentroids();
    }

    // Print the coordinates of each cluster centroid
    for (int i = 0; i < k; ++i) {
        std::cout << "Cluster " << i + 1 << " Centroid: (" << centroids[i].x << ", " << centroids[i].y << ")\n";
    }
}
