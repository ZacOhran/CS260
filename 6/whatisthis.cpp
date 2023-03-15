#include "binary_search_tree.h"
int main() {
    BinarySearchTree bst;

    bst.add(5);
    bst.add(3);
    bst.add(7);
    bst.add(1);
    bst.add(9);

    bst.traverse(); // expected output: 1 3 5 7 9

    bst.remove(3);

    bst.traverse(); // expected output: 1 5 7 9

    return 0;
}