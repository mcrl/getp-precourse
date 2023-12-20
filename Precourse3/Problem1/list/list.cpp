#include "list.h"

// Explicit instantiation
template class getp::list<int>;
template class getp::list<float>;
template class getp::list<double>;

namespace getp {

// Node implementation
template <class T>
list<T>::Node::Node(const T &value) {
  // TODO : FILL IN HERE
}

// iterator implementation
template <class T> list<T>::iterator::iterator(Node *node) {
  // TODO : FILL IN HERE
}

template <class T> const T &list<T>::iterator::operator*() const {
  // TODO : FILL IN HERE
}

template <class T> typename list<T>::iterator &list<T>::iterator::operator++() {
  // TODO : FILL IN HERE
}

template <class T>
typename list<T>::iterator list<T>::iterator::operator++(int) {
  // TODO : FILL IN HERE
}

template <class T>
bool list<T>::iterator::operator!=(const iterator &other) const {
  // TODO : FILL IN HERE
}

// Rest of the list class implementation
template <class T> list<T>::list(){
  // TODO : FILL IN HERE
}

template <class T>
list<T>::list(const list &other) {
  // TODO : FILL IN HERE
}

template <class T>
list<T>::list(std::initializer_list<T> initList)
  // TODO : FILL IN HERE
}

template <class T> list<T>::~list() { 
  // TODO : FILL IN HERE
}

template <class T> list<T> &list<T>::operator=(const list &other) {
  // TODO : FILL IN HERE
}

template <class T> void list<T>::push_back(const T &value) {
  // TODO : FILL IN HERE
}

template <class T> void list<T>::push_front(const T &value) {
  // TODO : FILL IN HERE
}

template <class T> void list<T>::pop_back() {
  // TODO : FILL IN HERE
}

template <class T> void list<T>::pop_front() {
  // TODO : FILL IN HERE
}

template <class T> void list<T>::emplace_back(T &&value) {
  // TODO : FILL IN HERE
}

template <class T> void list<T>::emplace_front(T &&value) {
  // TODO : FILL IN HERE
}

template <class T> std::size_t list<T>::size() const {
  // TODO : FILL IN HERE
}

template <class T> void list<T>::print() const {
  // TODO : FILL IN HERE
}

template <class T> void list<T>::clear() {
  // TODO : FILL IN HERE
}

template <class T> typename list<T>::iterator list<T>::begin() {
  // TODO : FILL IN HERE
}

template <class T> typename list<T>::iterator list<T>::end() {
  // TODO : FILL IN HERE
}

template <class T> typename list<T>::iterator list<T>::cbegin() const {
  // TODO : FILL IN HERE
}

template <class T> typename list<T>::iterator list<T>::cend() const {
  // TODO : FILL IN HERE
}

template <class T> typename list<T>::iterator list<T>::rbegin() {
  // TODO : FILL IN HERE
}

template <class T> typename list<T>::iterator list<T>::rend() {
  // TODO : FILL IN HERE
}

template <class T> typename list<T>::iterator list<T>::crbegin() const {
  // TODO : FILL IN HERE
}

template <class T> typename list<T>::iterator list<T>::crend() const {
  // TODO : FILL IN HERE
}

} // namespace getp
