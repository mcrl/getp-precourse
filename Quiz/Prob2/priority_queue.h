#pragma once

#include <iostream>
#include <iterator>
#include <stdexcept>
#include <queue>

namespace getp {

template <class T>
class priority_queue {
private:
  // IMPLEMENT HERE

public:
  priority_queue();
  ~priority_queue();
  void push( const T& value );
  const T& top() const;
  void pop();
};

template <class T>
priority_queue<T>::priority_queue() {
  // IMPLEMENT HERE
}

template <class T>
priority_queue<T>::~priority_queue() { 
  // IMPLEMENT HERE
}

template <class T>
void priority_queue<T>::push(const T &value) {
  // IMPLEMENT HERE
}

template <class T>
const T& priority_queue<T>::top() const {
  // IMPLEMENT HERE
}

template <class T>
void priority_queue<T>::pop() {
  // IMPLEMENT HERE
}

} // namespace getp
