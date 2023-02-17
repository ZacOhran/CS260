#pragma once

/* Node struct with data and pointer */
template <class N>
struct Node
{
    // Variables
    N data;     // Number is the data in the node
    Node *next; // Pointer to the next node

    // Function for creating new node
    Node() {}
    Node(N newData, Node *newNext)
    {
        this->data = newData;
        this->next = newNext;
    }
};
