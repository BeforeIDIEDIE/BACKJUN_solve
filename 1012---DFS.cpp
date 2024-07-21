#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


vector<vector<int>> vec;

void DFS(int row, int col)
{
    vec[row][col] = 0;
    if (col > 0 && vec[row][col - 1] > 0)
    {
        DFS(row, col - 1);
    }
    if (col < vec[0].size() - 1 && vec[row][col + 1] > 0)
    {
        DFS(row, col + 1);
    }
    if (row > 0 && vec[row - 1][col] > 0)
    {
        DFS(row - 1, col);
    }
    if (row < vec.size() - 1 && vec[row + 1][col] > 0)
    {
        DFS(row + 1, col);
    }
}

void testing(int row,int col,int f)
{
    vec.assign(row, vector<int>(col, 0));
    for (int i = 0; i < f; i++)
    {
        int r = 0, c = 0;
        cin >> r >> c;
        vec[r][c] = 1;
    }
    int cnt = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (vec[i][j] == 1)
            {
                DFS(i, j);
                cnt++;
            }
        }
    }
    cout << cnt<<"\n";
}

int main()
{
    int T = 0;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n = 0, m = 0, f = 0;
        cin >> n >> m >> f;
        testing(n, m, f);
    }
}