#pragma once

/* Node struct, data and pointer creation */
template <class N>
struct Node
{
    // Variables
    N data;
    Node *next; // points to next node

    // Func to create next node
    Node() {}
    Node(N newData, Node *newNext)
    {
        this->data = newData;
        this->next = newNext;
    }
};
