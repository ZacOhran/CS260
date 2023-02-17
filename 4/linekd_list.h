#include <iostream>

using namespace std;

// Node Class.
class Node
{
public:
    // Data and a Next Pointer to next item in linked list.
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
// Linked List class that includes needed functions.
class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = NULL;
    }
    // FUNC to add a value to the list.
    // Checks position of where it will be aded ot, and
    void add(int value, int position)
    {
        Node *new_node = new Node(value);
        // Puts new node at head of list.
        if (position == 1)
        {
            new_node->next = head;
            head = new_node;
        }
        else
        // puts node in a different position in the list.
        {
            Node *previous_node = head;
            for (int i = 1; i < position - 1; i++)
            {
                // Checks to see if desired position is outside of list. Says cant do.
                if (previous_node->next == NULL)
                {
                    cout << "Not a valid position." << endl;
                    return;
                }
                previous_node = previous_node->next;
            }
            new_node->next = previous_node->next;
            previous_node->next = new_node;
        }
    }
    // Removes a value of a specific position in list.
    int remove(int position)
    {
        // If list is empty AKA head has no node/values, says so.
        if (head == NULL)
        {
            cout << "The list is empty." << endl;
            return -1;
        }
        // Deletes head if that's what is wanted
        Node *previous_node = head;
        if (position == 1)
        {
            head = head->next;
            int removed_value = previous_node->data;
            delete previous_node;
            return removed_value;
        }
        else
        // Does the deleting of the node in list at specific position.
        {
            for (int i = 1; i < position - 1; i++)
            {
                if (previous_node->next == NULL)
                {
                    cout << "Not a valid position." << endl;
                    return -1;
                }
                previous_node = previous_node->next;
            }
            // Checks to see if position is valid to delete. 5 items in list, cant delete #6.
            Node *removed_node = previous_node->next;
            if (removed_node == NULL)
            {
                cout << "Not a valid position." << endl;
                return -1;
            }
            previous_node->next = removed_node->next;
            int removed_value = removed_node->data;
            delete removed_node;
            return removed_value;
        }
    }
    // FUNC to get a value of a specified position.
    int get(int position)
    {
        if (head == NULL)
        {
            cout << "The list is empty." << endl;
            return -1;
        }
        // checks if position is NULL. If it is, says so.
        Node *current_node = head;
        for (int i = 1; i < position; i++)
        {
            if (current_node == NULL)
            {
                cout << "Not a valid position." << endl;
                return -1;
            }
            current_node = current_node->next;
        }
        // Returns value of the desired position.
        return current_node->data;
    }
};