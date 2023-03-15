#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

struct Node
{
    int data;
    Node *left;
    Node *right;
};

class BinarySearchTree
{
private:
    Node *root;

    Node *createNode(int value);
    Node *insert(Node *node, int value);
    Node *findMin(Node *node);
    Node *remove(Node *node, int value);
    void inorderTraversal(Node *node);

public:
    BinarySearchTree();
    void add(int value);
    void remove(int value);
    void traverse();
};

#endif