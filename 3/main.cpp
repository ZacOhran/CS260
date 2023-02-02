#include <iostream>

#include "node.h"
#include "queue.h"

using std::cout;
using std::endl;

int main()
{
    // Testing
    Queue<int> myQueue;

    // Testing empty Queue, seeTop, and dequeue functions
    cout << "\tTesting Empty Queue\n";
    cout << "Top: " << myQueue.seeTop() << endl;
    cout << "Dequeue: " << myQueue.dequeue() << endl;

    // Testing one Node in Queue and enqueue function
    cout << "\n\tTesting One Node in Queue:\n";
    myQueue.enqueue(50);
    cout << "Top: " << myQueue.seeTop() << endl;
    cout << "Dequeue: " << myQueue.dequeue() << endl;

    // Testing all functions using multiple Nodes in Queue
    cout << "\n\tTesting Multiple Nodes in Queue\n";
    myQueue.enqueue(5);
    myQueue.enqueue(15);
    myQueue.enqueue(20);
    cout << "Top: " << myQueue.seeTop() << endl;
    cout << "Dequeue: " << myQueue.dequeue() << endl;
    cout << "Top: " << myQueue.seeTop() << endl;
    cout << "Dequeue: " << myQueue.dequeue() << endl;
    cout << "Top: " << myQueue.seeTop() << endl;
    cout << "Dequeue: " << myQueue.dequeue() << endl;
    cout << "Top: " << myQueue.seeTop() << endl;
    cout << "Dequeue: " << myQueue.dequeue() << endl;

    return 0;
}
