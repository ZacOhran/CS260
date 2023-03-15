#include "binary_search_tree.h"
#include "binary_search_tree.cpp"
int main()
{
    // Actual creation of the class
    BinarySearchTree bst;

// Adding the nodes in with single digit integers
    bst.add(9);
    bst.add(1);
    bst.add(5);
    bst.add(3);
    bst.add(7);

    bst.traverse(); // expected output: 1 3 5 7 9

    bst.remove(5);

    bst.traverse(); // expected output: 1 3 7 9

    return 0;
}