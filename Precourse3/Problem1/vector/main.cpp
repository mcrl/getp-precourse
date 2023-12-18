#include "vector.h"

int main() {
    // Test 1: Constructor, push_back
    getp::vector<int> myVector;

    for (int i = 1; i <= 10; ++i) {
        myVector.push_back(i);
    }
    std::cout << "Test 1: Constructor, push_back\n";
    std::cout << "Vector elements using operator[]: [";
    for (size_t i = 0; i < myVector.getSize(); ++i) {
        std::cout << myVector[i];
        if (i < myVector.getSize() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]\n";
    std::cout << "-----------------------------------------\n";

    // Test 2: operator[]
    std::cout << "Test 2: operator[]\n";
    std::cout << "Vector elements using operator[]: [";
    for (size_t i = 0; i < myVector.getSize(); ++i) {
        std::cout << myVector[i];
        if (i < myVector.getSize() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]\n";
    std::cout << "-----------------------------------------\n";

    // Test 3: at (including exception situation)
    try {
        std::cout << "Test 3: at (including exception situation)\n";
        std::cout << "Accessing elements using at(): [";
        for (size_t i = 0; i < myVector.getSize() + 1; ++i) {
            std::cout << myVector.at(i);
            if (i < myVector.getSize()) {
                std::cout << ", ";
            }
        }
        std::cout << "]\n";
    } catch (const std::out_of_range& e) {
        std::cerr << "Exception: " << e.what() << "\n";
    }
    std::cout << "-----------------------------------------\n";

    // Test 4: front, back
    std::cout << "Test 4: front, back\n";
    std::cout << "Front element: " << myVector.front() << "\n";
    std::cout << "Back element: " << myVector.back() << "\n";
    std::cout << "-----------------------------------------\n";

    // Test 5: data
    int* dataPointer = myVector.data();
    std::cout << "Test 5: data\n";
    std::cout << "Vector elements using data(): [";
    for (size_t i = 0; i < myVector.getSize(); ++i) {
        std::cout << dataPointer[i];
        if (i < myVector.getSize() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]\n";
    std::cout << "-----------------------------------------\n";

    // Test 6: Iterators
    std::cout << "Test 6: Iterators\n";
    std::cout << "Vector elements using iterators: [";
    for (int& element : myVector) {
        std::cout << element;
        if (&element != &myVector.back()) {
            std::cout << ", ";
        }
    }
    std::cout << "]\n";
    std::cout << "-----------------------------------------\n";

    // Test 7: Reverse Iterators
    std::cout << "Test 7: Reverse Iterators\n";
    std::cout << "Vector elements using reverse iterators: [";
    auto it = myVector.rbegin();
    if (it != myVector.rend()) {
        std::cout << *it;
        ++it;
    }
    for (; it != myVector.rend(); ++it) {
        std::cout << ", " << *it;
    }
    std::cout << "]\n";
    std::cout << "-----------------------------------------\n";

    // Test 8: emplace_back, append_range
    myVector.emplace_back(11);
    myVector.emplace_back(12);
    std::cout << "Test 8: emplace_back\n";
    std::cout << "Vector elements after modifications: [";
    for (const int& element : myVector) {
        std::cout << element;
        if (&element != &myVector.back()) {
            std::cout << ", ";
        }
    }
    std::cout << "]\n";
    std::cout << "-----------------------------------------\n";

    // Test 9: pop_back
    myVector.pop_back();
    std::cout << "Test 9: pop_back\n";
    std::cout << "Vector elements after pop_back: [";
    for (const int& element : myVector) {
        std::cout << element;
        if (&element != &myVector.back()) {
            std::cout << ", ";
        }
    }
    std::cout << "]\n";
    std::cout << "-----------------------------------------\n";

    // Test 10: reserve
    myVector.reserve(20);
    std::cout << "Test 10: reserve\n";
    std::cout << "Vector elements after reserve: [";
    for (const int& element : myVector) {
        std::cout << element;
        if (&element != &myVector.back()) {
            std::cout << ", ";
        }
    }
    std::cout << "]\n";
    std::cout << "-----------------------------------------\n";

    std::cout << "All tests completed.\n";

    return 0;
}

