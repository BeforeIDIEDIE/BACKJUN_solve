#include <iostream>

#include <vector>

#include <algorithm> 

using namespace std;

vector<vector<int>> vec;

void DFS(int row, int col)
{
    vec[row][col] = 0;
    if (col > 0 && vec[row][col - 1] == 1)
    {
        DFS(row, col - 1);
    }
    if (col < vec[0].size() - 1 && vec[row][col + 1] == 1)
    {
        DFS(row, col + 1);
    }
    if (row > 0 && vec[row - 1][col] == 1)
    {
        DFS(row - 1, col);
    }
    if (row < vec.size() - 1 && vec[row + 1][col] == 1)
    {
        DFS(row + 1, col);
    }

    if (row > 0 && col > 0 && vec[row - 1][col - 1] == 1) 
    {
        DFS(row - 1, col - 1); 
    }
    if (row > 0 && col < vec[0].size() - 1 && vec[row - 1][col + 1] == 1) 
    { 
        DFS(row - 1, col + 1); 
    }
    if (row < vec.size() - 1 && col < vec[0].size() - 1 && vec[row + 1][col + 1] == 1) 
    { 
        DFS(row + 1, col + 1); 
    }
    if (row < vec.size() - 1 && col > 0 && vec[row + 1][col - 1] == 1) 
    {
        DFS(row + 1, col - 1);
    }
}

void testing(int row, int col)
{
    vec.assign(row, vector<int>(col, 0));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> vec[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (vec[i][j] == 1)
            {
                cnt++;
                DFS(i, j);
            }
        }
    }
    cout << cnt << "\n";
}

int main()
{
    int row = 0, col = 0;
    while (1)
    {
        cin >> col >> row;
        if (row == 0 && col == 0)
        {
            break;
        }
        testing(row, col);
    }

}