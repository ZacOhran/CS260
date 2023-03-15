#pragma once
#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

// Creation of struct that has pointers to left and right
struct Node
{
    int data;
    Node *left;
    Node *right;
};

// Class creation with functions initialized. Saw a YT video where the dude organized his
// files like this and i liked seeing the private area look clean like this
class BinarySearchTree
{
private:
    Node *root;

    Node *createNode(int value);
    Node *insert(Node *node, int value);
    Node *findMin(Node *node);
    Node *remove(Node *node, int value);
    void inorderTraversal(Node *node);

    // Honestly I don't remember why I have the functions in different places, but there was
    // a reason for calling the private class func in the public function.
public:
    BinarySearchTree();
    void add(int value);
    void remove(int value);
    void traverse();
};

#endif