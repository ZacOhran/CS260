#include <iostream>
#include <vector>
#include <string>
#include "gridLayoutGraphThing.h"
using namespace std;

int main()
{
    gridLayoutGraphThing graph(3, 3);
    graph.addVertexCell(0, 0, "A");
    graph.addVertexCell(0, 1, "B");
    graph.addVertexCell(1, 0, "C");
    graph.addVertexCell(1, 1, "D");
    graph.addVertexCell(2, 1, "E");
    graph.addVertexCell(2, 2, "F");

    // Add edges
    graph.addEdge(0, 0, 1, 1, 2);
    graph.addEdge(0, 1, 1, 0, 3);
    graph.addEdge(1, 1, 2, 1, 3);

    // Check if edges exist
    if (graph.hasEdge(0, 0, 1, 1))
    {
        cout << "Edge exists between A and D" << endl;
    }
    else
    {
        cout << "No edge between A and D" << endl;
    }

    if (graph.hasEdge(0, 1, 1, 0))
    {
        cout << "Edge exists between B and C" << endl;
    }
    else
    {
        cout << "No edge between B and C" << endl;
    }

    if (graph.hasEdge(1, 1, 2, 1))
    {
        cout << "Edge exists between D and E" << endl;
    }
    else
    {
        cout << "No edge between D and E" << endl;
    }

    // Remove edge
    graph.removeEdge(0, 0, 1, 1);

    // Check if edge was removed
    if (graph.hasEdge(0, 0, 1, 1))
    {
        cout << "Edge still exists between A and D" << endl;
    }
    else
    {
        cout << "No edge between A and D" << endl;
    }

    // Add edge
    graph.addEdge(0, 0, 2, 1, 1);

    // Check if new edge was added
    if (graph.hasEdge(0, 0, 2, 1))
    {
        cout << "New edge exists between A and E" << endl;
    }
    else
    {
        cout << "No edge between A and E" << endl;
    }

    return 0;
};