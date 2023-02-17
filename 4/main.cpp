#include <iostream>
#include "linekd_list.h"

int main()
{
    // Creation of linked list.
    LinkedList my_list;

    // Uses add FUNC from linekd.h to add values at certain positions in list.
    my_list.add(10, 1);
    my_list.add(20, 2);
    my_list.add(30, 3);
    my_list.add(40, 2);

    // Gets the values previously added and prints them onto the screen using cout, which i hate and miss printf or just print("") from python.
    cout << "List after adding 10, 20, 30, 40:" << endl;
    for (int i = 1; i <= 4; i++)
    {
        cout << my_list.get(i) << " ";
    }
    cout << endl;
    // Removing a value from the list at position three.
    int removed_value = my_list.remove(3);
    // Prints removed value.
    cout << "Removed value at position 3: " << removed_value << endl;
    // Prints full list after value was removed from three.
    cout << "List after removing value at position 3:" << endl;
    for (int i = 1; i <= 3; i++)
    {
        cout << my_list.get(i) << " ";
    }
    cout << endl;
    // adds one last value to list to show it didn't break during all the adding and removing done earlier.
    my_list.add(50, 5);

    cout << "List after adding value 50 at position 5:" << endl;
    for (int i = 1; i <= 4; i++)
    {
        cout << my_list.get(i) << " ";
    }
    // Oh look, it worked.
    cout << my_list.get(5) << " ";
    cout << endl;
    // yay
    return 0;
};