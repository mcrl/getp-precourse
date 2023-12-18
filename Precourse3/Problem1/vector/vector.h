#pragma once

#include <iostream>
#include <iterator>
#include <stdexcept>

namespace getp {

template <typename T> class vector {
private:
  T *data_;
  size_t size;
  size_t capacity;

public:
  vector();
  ~vector();

  vector(const vector &other);
  vector(vector &&other) noexcept;

  vector &operator=(const vector &other);
  vector &operator=(vector &&other) noexcept;

  T &at(size_t index);
  T &operator[](size_t index);
  T &front();
  T &back();
  T *data();

  size_t getSize() const;

  void push_back(const T &value);

  template <typename... Args> void emplace_back(Args &&... args);

  template <typename InputIt> void append_range(InputIt first, InputIt last);

  void pop_back();
  void reserve(size_t newCapacity);

  T *begin();
  const T *cbegin() const;
  T *end();
  const T *cend() const;

  std::reverse_iterator<T *> rbegin();
  std::reverse_iterator<const T *> crbegin() const;
  std::reverse_iterator<T *> rend();
  std::reverse_iterator<const T *> crend() const;
};

} // namespace getp
