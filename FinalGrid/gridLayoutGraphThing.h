#include <iostream>
#include <vector>
#include <string>

using namespace std;

class gridLayoutGraphThing
{
private:
    int num_rows;
    int num_cols;
    vector<vector<string>> grid;
    vector<vector<pair<int, int>>> adj_matrix;

public:
    gridLayoutGraphThing(int rows, int cols) : num_rows(rows), num_cols(cols), grid(num_rows, vector<string>(num_cols)), adj_matrix(num_rows * num_cols, vector<pair<int, int>>(num_rows * num_cols, make_pair(0, 0))) {}

    void addVertexCell(int row, int col, string value)
    {
        if (row >= 0 && row < num_rows && col >= 0 && col < num_cols)
        {
            grid[row][col] = value;
        }
    }

    void removeVertexCell(int row, int col)
    {
        if (row >= 0 && row < num_rows && col >= 0 && col < num_cols)
        {
            grid[row][col] = "";
        }
    }

    string getValue(int row, int col)
    {
        if (row >= 0 && row < num_rows && col >= 0 && col < num_cols)
        {
            return grid[row][col];
        }
        return "";
    }

    void addEdge(int from_row, int from_col, int to_row, int to_col, int weight) // Added weight parameter
    {
        if (from_row >= 0 && from_row < num_rows && from_col >= 0 && from_col < num_cols && to_row >= 0 && to_row < num_rows && to_col >= 0 && to_col < num_cols)
        {
            int from_index = from_row * num_cols + from_col;
            int to_index = to_row * num_cols + to_col;
            adj_matrix[from_index][to_index] = {1, weight}; // Updated to store weight along with existence
        }
    }

    void removeEdge(int from_row, int from_col, int to_row, int to_col)
    {
        if (from_row >= 0 && from_row < num_rows && from_col >= 0 && from_col < num_cols && to_row >= 0 && to_row < num_rows && to_col >= 0 && to_col < num_cols)
        {
            int from_index = from_row * num_cols + from_col;
            int to_index = to_row * num_cols + to_col;
            adj_matrix[from_index][to_index] = {0, 0}; // Updated to remove weight along with existence
        }
    }

    bool hasEdge(int from_row, int from_col, int to_row, int to_col)
    {
        if (from_row >= 0 && from_row < num_rows && from_col >= 0 && from_col < num_cols && to_row >= 0 && to_row < num_rows && to_col >= 0 && to_col < num_cols)
        {
            int from_index = from_row * num_cols + from_col;
            int to_index = to_row * num_cols + to_col;
            return adj_matrix[from_index][to_index].first == 1;
        }
        return false;
    }
};