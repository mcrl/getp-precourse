#include "list.h"
#include <cassert>
#include <iostream>

// Function to print the elements of the list
template <typename T>
void printList(getp::list<T> myList) {
    std::cout << "List elements: [";
    for (const auto &value : myList) {
        std::cout << value << " ";
    }
    std::cout << "]\n";
}

int main() {
    // Test 1: Default constructor
    getp::list<int> mylist1;
    assert(mylist1.size() == 0);
    std::cout << "Test 1: Default constructor - size: " << mylist1.size() << std::endl;
    printList(mylist1);
    std::cout << "-----------------------------------------\n";

    // Test 2: Initializer list constructor
    getp::list<int> mylist2 = {1, 2, 3, 4, 5};
    assert(mylist2.size() == 5);
    std::cout << "Test 2: Initializer list constructor - size: " << mylist2.size() << std::endl;
    printList(mylist2);
    std::cout << "-----------------------------------------\n";

    // Test 3: Copy constructor
    getp::list<int> mylist3 = mylist2;
    assert(mylist3.size() == 5);
    std::cout << "Test 3: Copy constructor - size: " << mylist3.size() << std::endl;
    printList(mylist3);
    std::cout << "-----------------------------------------\n";

    // Test 4: push_back
    mylist3.push_back(6);
    assert(mylist3.size() == 6);
    std::cout << "Test 4: push_back - size: " << mylist3.size() << std::endl;
    printList(mylist3);
    std::cout << "-----------------------------------------\n";

    // Test 5: emplace_back
    mylist3.emplace_back(7);
    assert(mylist3.size() == 7);
    std::cout << "Test 5: emplace_back - size: " << mylist3.size() << std::endl;
    printList(mylist3);
    std::cout << "-----------------------------------------\n";

    // Test 6: push_front
    mylist3.push_front(0);
    assert(mylist3.size() == 8);
    std::cout << "Test 6: push_front - size: " << mylist3.size() << std::endl;
    printList(mylist3);
    std::cout << "-----------------------------------------\n";

    // Test 7: emplace_front
    mylist3.emplace_front(-1);
    assert(mylist3.size() == 9);
    std::cout << "Test 7: emplace_front - size: " << mylist3.size() << std::endl;
    printList(mylist3);
    std::cout << "-----------------------------------------\n";

    // Test 8: pop_back
    mylist3.pop_back();
    assert(mylist3.size() == 8);
    std::cout << "Test 8: pop_back - size: " << mylist3.size() << std::endl;
    printList(mylist3);
    std::cout << "-----------------------------------------\n";

    // Test 9: pop_front
    mylist3.pop_front();
    assert(mylist3.size() == 7);
    std::cout << "Test 9: pop_front - size: " << mylist3.size() << std::endl;
    printList(mylist3);
    std::cout << "-----------------------------------------\n";

    // Test 10: Iterators
    int expectedValue = 1;
    std::cout << "Test 10: Iterators - values: ";
    for (const auto &value : mylist3) {
        std::cout << value << " ";
        expectedValue++;
    }
    std::cout << std::endl;
    std::cout << "-----------------------------------------\n";

    // Test 11: Clear
    mylist3.clear();
    assert(mylist3.size() == 0);
    std::cout << "Test 11: Clear - size: " << mylist3.size() << std::endl;
    printList(mylist3);

    std::cout << "All tests passed successfully!" << std::endl;

    return 0;
}

