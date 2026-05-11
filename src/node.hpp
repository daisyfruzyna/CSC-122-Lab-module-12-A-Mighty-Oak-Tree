//
// Created by daisy on 5/5/2026.
//

#ifndef A_MIGHTY_OAK_TREE_NODE_HPP
#define A_MIGHTY_OAK_TREE_NODE_HPP
#include <stddef.h>

using namespace std;

template <typename T>
class Node {
public:
  T data;
  Node<T> *left;
  Node<T> *right;

  Node() {
    data = NULL;
    left = nullptr;
    right = nullptr;
  }

  Node(T data) {
    this->data = data;
    left = nullptr;
    right = nullptr;
  }

  T get_data() {
    return data;
  }
  void set_left(Node node) {
    left = &node;
  }
  void set_right(Node node) {
    right = &node;
  }
};


#endif //A_MIGHTY_OAK_TREE_NODE_HPP