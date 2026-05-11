#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/hello.hpp"
#include "../src/node.hpp"
#include "../src/squirrel.hpp"

TEST_CASE("it returns Hello World") {
    REQUIRE( hello() == "Hello World!" );
}

TEST_CASE( "i dont know what else i would test for a binary tree" ) {
    Squirrel squirrel1 = Squirrel("squirrel1");
    Node<Squirrel> node_one = Node(squirrel1);

    Squirrel squirrel2 = Squirrel("squirrel2");
    Node<Squirrel> node_two = Node(squirrel2);

    Squirrel squirrel3 = Squirrel("squirrel3");
    Node<Squirrel> node_three = Node(squirrel3);

    node_one.set_left(node_two);
    node_one.set_right(node_three);


    Node<Squirrel> retrieved_node_one = *node_one.left;
    REQUIRE( retrieved_node_one.get_data().get_name() == node_two.get_data().get_name() );

    Node<Squirrel> retrieved_node_two = *node_one.right;
    REQUIRE( retrieved_node_two.get_data().get_name() == node_three.get_data().get_name() );
}