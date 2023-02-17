#include <iostream>
#include <stdexcept>
#include "arraylinked_list.h"
// Main FUNC for testing the array-based linked list.
// Includes a exception handler that I found in different youtube videos. was also a method that ChatGTP said was good to learn. Better than Error Codes.
int main()
{
    try
    {
        // Creates list, inserts four values.
        ArrayList list;
        list.insert(5);
        list.insert(1);
        list.insert(10);
        list.insert(3);

        int value = 0;

        // Gets various positions, removes positions and prints out the new value allocated after sorting is finished. Inserts and does similarly.
        std::cout << "Element at index 2: " << list.get(2) << std::endl;
        std::cout << "Removed element: " << list.get(1) << std::endl;
        list.remove(1);
        std::cout << "Inserted element: " << list.get(1) << std::endl;
        list.insert(4);
        std::cout << "Element at index 1: " << list.get(1) << std::endl;

        // Accessing an out of range index
        std::cout << "Trying to access an out of range index..." << std::endl;
        int value_out_of_range = list.get(10);
    }
    // Exemption handler here. Still learning about this, but the catch checks for the exception and triggers the response. Prints off what() is wrong.
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    // if we get here, it works and im happy
    return 0;
}