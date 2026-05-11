//
// Created by daisy on 5/5/2026.
//

#ifndef A_MIGHTY_OAK_TREE_SQUIRREL_HPP
#define A_MIGHTY_OAK_TREE_SQUIRREL_HPP
#include <string>

#include "node.hpp"

using namespace std;

class Squirrel {
private:
  string name;

public:
  Squirrel(string name) {
    this->name = name;
  }
  Squirrel() {
    name = "";
  }
  string get_name() {
    return this->name;
  }

};


#endif //A_MIGHTY_OAK_TREE_SQUIRREL_HPP