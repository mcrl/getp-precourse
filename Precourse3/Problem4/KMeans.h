// KMeans.h
#ifndef KMEANS_H
#define KMEANS_H
#include "Point.h"
#include <vector>

class KMeans {
private:
    std::vector<Point> data_points;
    std::vector<Point> centroids;
    int k;

public:
    KMeans(int num_points, int k);
    void run(int max_iterations);

private:
    void initializeCentroids();
    void generateRandomDataPoints(int num_points);
    void assignToClusters();
    void updateCentroids();
    double calculateDistance(const Point& p1, const Point& p2);
};

#endif // KMEANS_H
