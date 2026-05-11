#include <iostream>

#include "src/hello.hpp"
#include "src/node.hpp"
#include "src/squirrel.hpp"

int main() {

  Squirrel cheeks = Squirrel("Cheeks");
  Node<Squirrel> node_one = Node(cheeks);

  cout << node_one.get_data().get_name() << endl;
  Squirrel squeaks = Squirrel("Squeaks");
  Node<Squirrel> node_two = Node(squeaks);

  Squirrel fluffybutt = Squirrel("Mr. Fluffy Butt");
  Node<Squirrel> node_three = Node(fluffybutt);

  node_one.set_left(node_two);
  node_one.set_right(node_three);

  Node<Squirrel> retrieved_node_one = *node_one.left; // This should retrieve the left node

  if (retrieved_node_one.get_data().get_name() == node_two.get_data().get_name()) {
    cout << node_one.left->get_data().get_name() << endl;
  }
  // cout << retrieved_node_one.get_data().get_name() << endl;
  Node retrieved_node_two = *node_one.right; // This should retrieve the right node

}
