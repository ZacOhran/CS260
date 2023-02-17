<<<<<<< HEAD
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
=======
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
>>>>>>> 58ccd1a355e39aa45e03341d3e32c957cea40a9e
