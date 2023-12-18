#include "vector.h"

namespace getp {

template <typename T>
vector<T>::vector() {
  // TODO : FILL IN HERE
}

template <typename T> vector<T>::~vector() { 
  // TODO : FILL IN HERE
}

template <typename T>
vector<T>::vector(const vector &other) {
  // TODO : FILL IN HERE
}

template <typename T>
vector<T>::vector(vector &&other) noexcept { 
  // TODO : FILL IN HERE
}

template <typename T> vector<T> &vector<T>::operator=(const vector &other) {
  // TODO : FILL IN HERE
}

template <typename T> vector<T> &vector<T>::operator=(vector &&other) noexcept {
  // TODO : FILL IN HERE
}

template <typename T> T &vector<T>::at(size_t index) {
  // TODO : FILL IN HERE
}

template <typename T> T &vector<T>::operator[](size_t index) {
  // TODO : FILL IN HERE
}

template <typename T> T &vector<T>::front() {
  // TODO : FILL IN HERE
}

template <typename T> T &vector<T>::back() {
  // TODO : FILL IN HERE
}

template <typename T> T *vector<T>::data() {
  // TODO : FILL IN HERE
}

template <typename T> size_t vector<T>::getSize() const {
  // TODO : FILL IN HERE
}

template <typename T> void vector<T>::push_back(const T &value) {
  // TODO : FILL IN HERE
}

template <typename T>
template <typename... Args>
void vector<T>::emplace_back(Args &&... args) {
  // TODO : FILL IN HERE
}

template <typename T>
template <typename InputIt>
void vector<T>::append_range(InputIt first, InputIt last) {
  // TODO : FILL IN HERE
}

template <typename T> void vector<T>::pop_back() {
  // TODO : FILL IN HERE
}

template <typename T> void vector<T>::reserve(size_t newCapacity) {
  // TODO : FILL IN HERE
}

template <typename T> T *vector<T>::begin() {
  // TODO : FILL IN HERE
}

template <typename T> const T *vector<T>::cbegin() const {
  // TODO : FILL IN HERE
}

template <typename T> T *vector<T>::end() {
  // TODO : FILL IN HERE
}

template <typename T> const T *vector<T>::cend() const {
  // TODO : FILL IN HERE
}

template <typename T> std::reverse_iterator<T *> vector<T>::rbegin() {
  // TODO : FILL IN HERE
}

template <typename T>
std::reverse_iterator<const T *> vector<T>::crbegin() const {
  // TODO : FILL IN HERE
}

template <typename T> std::reverse_iterator<T *> vector<T>::rend() {
  // TODO : FILL IN HERE
}

template <typename T>
std::reverse_iterator<const T *> vector<T>::crend() const {
  // TODO : FILL IN HERE
}

// Explicit instantiation for supported types
template class vector<int>;
template void getp::vector<int>::emplace_back<int>(int &&);

} // namespace getp
