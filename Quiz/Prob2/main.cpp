#include <iostream>
#include <algorithm>
#include <random>
#include <chrono>
#include <vector>
#include "priority_queue.h"

int main() {
    const int num_elem = 10;
    const int max_val = 1000;
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine gen(seed);
    std::uniform_int_distribution<int> dist(1, max_val);

    getp::priority_queue<int> pq;
    std::vector<int> ref;

    std::cout << "Test 1: Push and check top" << std::endl;
    for (int i = 0; i < num_elem; ++i) {
        int val = dist(gen);
        pq.push(val);
        ref.push_back(val);
        if (pq.top() != *std::max_element(ref.begin(), ref.end())) {
            std::cerr << "Test 1 failed" << std::endl;
            return 1;
        }
    }

    std::cout << "Passed Test 1" << std::endl;
    std::cout << "-----------------------------------------\n";

    std::cout << "Test 2: Pop and check top" << std::endl;
    std::sort(ref.begin(), ref.end());
    for (int i = 0; i < num_elem - 1; ++i) {
        pq.pop();
        ref.pop_back();
        if (pq.top() != *std::max_element(ref.begin(), ref.end())) {
            std::cerr << "Test 2 failed" << std::endl;
            return 1;
        }
    }

    std::cout << "Passed Test 2" << std::endl;
    std::cout << "-----------------------------------------\n";

    std::cout << "All tests completed.\n";

    return 0;
}

