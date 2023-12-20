#pragma once

#include <cassert>
#include <initializer_list>
#include <iostream>

namespace getp {

template <class T> class list {
private:
  struct Node {
    T data;
    Node *next;
    Node *prev;

    Node(const T &value);
  };

  Node *head;
  Node *tail;
  std::size_t size_;

public:
  class iterator {
  private:
    Node *current;

  public:
    iterator(Node *node);

    const T &operator*() const;
    iterator &operator++();
    iterator operator++(int);
    bool operator!=(const iterator &other) const;
  };

  list();
  list(const list &other);
  list(std::initializer_list<T> initList);
  ~list();

  list &operator=(const list &other);

  void push_back(const T &value);
  void push_front(const T &value);
  void pop_back();
  void pop_front();
  void emplace_back(T &&value);
  void emplace_front(T &&value);

  std::size_t size() const;

  void print() const;
  void clear();

  iterator begin();
  iterator end();
  iterator cbegin() const;
  iterator cend() const;
  iterator rbegin();
  iterator rend();
  iterator crbegin() const;
  iterator crend() const;
};

} // namespace getp
