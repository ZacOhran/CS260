#include "node.h"

/* data structure of a linked queue */
template <typename T>
class Queue
{
public:
    // Create a node
    void enqueue(T newData)
    {
        // checking for top and endQueue pointers
        if (endQueue == nullptr)
        {
            Node<T> *newNode = new Node<T>(newData, endQueue);
            // creation of top and endQueue for queue. should happen once per queue
            top = newNode;
            endQueue = newNode;
        }
        // making the back of the queue the endQueue
        else
        {
            Node<T> *newNode = new Node<T>(newData, endQueue);
            endQueue = newNode;
        }
    }

    // Return value of top and pointing top to the next value in queue
    T dequeue()
    {
        // If Queue is empty, return invalid
        if (top == nullptr)
        {
            return -1;
        }
        // If there is only one node
        else if (top == endQueue)
        {
            T result = top->data;

            top = nullptr;
            endQueue = nullptr;

            return result;
        }

        // gets the current top data
        T result = top->data;
        Node<T> *old_top = top;
        Node<T> *search_node = endQueue;

        // search algorithm
        while (search_node->next != old_top)
        {
            search_node = search_node->next;
        }

        // cleanup things
        top = search_node;
        delete old_top;
        delete search_node;
        return result;
    }

    // returns data of top of queue
    T seeTop()
    {
        if (top == nullptr)
        {
            return -1;
        }

        return top->data;
    }

    // returns data of  of queue
    T seeEnd()
    {
        if (endQueue == nullptr)
        {
            return -1;
        }

        return endQueue->data;
    }

    // initialization of queue, sets null pointers for top and endQueue
    Queue()
    {
        top = nullptr;
        endQueue = nullptr;
    }

private:
    // creation of node pointers for top and endQueue
    Node<T> *top;
    Node<T> *endQueue;
};