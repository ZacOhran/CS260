#pragma once
#include "binary_search_tree.h"
#include <iostream>

using namespace std;

// Creates the node
Node *BinarySearchTree::createNode(int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// inserts a child
Node *BinarySearchTree::insert(Node *node, int value)
{
    if (node == NULL)
    {
        node = createNode(value);
    }
    else if (value < node->data)
    {
        node->left = insert(node->left, value);
    }
    else if (value > node->data)
    {
        node->right = insert(node->right, value);
    }
    return node;
}

// finds smallest
Node *BinarySearchTree::findMin(Node *node)
{
    while (node->left != NULL)
    {
        node = node->left;
    }
    return node;
}

// in charge of deleting a node
Node *BinarySearchTree::remove(Node *node, int value)
{
    if (node == NULL)
    {
        return NULL;
    }
    else if (value < node->data)
    {
        node->left = remove(node->left, value);
    }
    else if (value > node->data)
    {
        node->right = remove(node->right, value);
    }
    else
    {
        if (node->left == NULL && node->right == NULL)
        {
            delete node;
            node = NULL;
        }
        else if (node->left == NULL)
        {
            Node *temp = node;
            node = node->right;
            delete temp;
        }
        else if (node->right == NULL)
        {
            Node *temp = node;
            node = node->left;
            delete temp;
        }
        else
        {
            Node *temp = findMin(node->right);
            node->data = temp->data;
            node->right = remove(node->right, temp->data);
        }
    }
    return node;
}

// Traversal (i had chatgtp help me out wiht this. helped me out INSANELY. i understand it)
void BinarySearchTree::inorderTraversal(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    inorderTraversal(node->left);
    cout << node->data << " ";
    inorderTraversal(node->right);
}

BinarySearchTree::BinarySearchTree()
{
    root = NULL;
}

void BinarySearchTree::add(int value)
{
    root = insert(root, value);
}

void BinarySearchTree::remove(int value)
{
    root = remove(root, value);
}

void BinarySearchTree::traverse()
{
    inorderTraversal(root);
    cout << endl;
}