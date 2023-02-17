#include <iostream>
#include <algorithm>
#include <stdexcept>

using namespace std;

// Array list class creation
class ArrayList
{
private:
    int *arr;
    int capacity;
    int size;
    // Resizing the Array if need be
    void resize()
    {
        capacity *= 2;
        int *new_arr = new int[capacity];
        for (int i = 0; i < size; i++)
        {
            new_arr[i] = arr[i];
        }
        delete[] arr;
        arr = new_arr;
    }

public:
    // Class Constructor
    ArrayList()
    {
        capacity = 4;
        size = 0;
        arr = new int[capacity];
    }

    // Class Destructor
    ~ArrayList()
    {
        delete[] arr;
    }
    // Searches array for a position of a number. If not found, ends.
    int binary_search(int value)
    {
        int low = 0;
        int high = size - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid] == value)
            {
                return mid;
            }
            else if (arr[mid] < value)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return -1;
    }
    // Inserts a specified value into the array.
    void insert(int value)
    {
        if (size == capacity)
        {
            resize();
        }
        int position = upper_bound(arr, arr + size, value) - arr;
        rotate(arr + position, arr + size, arr + size + 1);
        arr[position] = value;
        size++;
    }
    // Removes a value determined by its position in the array.
    void remove(int position)
    {
        if (position < 0 || position >= size)
        {
            throw out_of_range("position out of range");
        }
        rotate(arr + position, arr + position + 1, arr + size);
        size--;
    }
    // Gets the value of a specific position and returns that value to be printed elsewhere. main I think.
    int get(int position)
    {
        if (position < 0 || position >= size)
        {
            throw out_of_range("position out of range");
        }
        return arr[position];
    }
};