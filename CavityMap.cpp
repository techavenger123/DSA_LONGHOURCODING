#include <iostream>
#include <vector>
#include <string>

using namespace std;
vector<string> cavityMap(vector<string> &grid)
{
    int n = grid.size();
    vector<string> result = grid; // Create a copy of the grid to modify

    for (int i = 1; i < n - 1; ++i)
    {
        for (int j = 1; j < n - 1; ++j)
        {
            // Check if the current cell is a cavity
            char current = grid[i][j];
            if (current > grid[i - 1][j] && current > grid[i + 1][j] &&
                current > grid[i][j - 1] && current > grid[i][j + 1])
            {
                result[i][j] = 'X'; // Replace cavity with 'X'
            }
        }
    }

    return result;
}
void print(vector<string> &grid)
{
    for (string s:grid)
    {
        cout<<s<<"\n";
    }
    
}

int main()
{
    int n;
    cout << "Enter the size of the grid: ";
    cin >> n;

    vector<string> grid(n);
    cout << "Enter the grid values (each row as a string of digits):\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> grid[i];
    }

    vector<string> result = cavityMap(grid);

    cout << "Resulting map:\n";
    for (const string &row : result)
    {
        cout << row << endl;
    }

    return 0;
}