#include <iostream>

#include <vector>

#include <algorithm> 

using namespace std;

vector<vector<char>> vec;
vector<vector<char>> vec_forRG;
void DFS_forRG(int row, int col, char RGB)
{
    vec_forRG[row][col] = '0';
    if (col > 0 && vec_forRG[row][col - 1] == RGB)
    {
        DFS_forRG(row, col - 1, RGB);
    }
    if (col < vec_forRG[0].size() - 1 && vec_forRG[row][col + 1] == RGB)
    {
        DFS_forRG(row, col + 1, RGB);
    }
    if (row > 0 && vec_forRG[row - 1][col] == RGB)
    {
        DFS_forRG(row - 1, col, RGB);
    }
    if (row < vec_forRG.size() - 1 && vec_forRG[row + 1][col] == RGB)
    {
        DFS_forRG(row + 1, col, RGB);
    }
}
void DFS_forNorm(int row, int col, char RGB)
{
    vec[row][col] = '0';
    if (col > 0 && vec[row][col - 1] == RGB )
    {
        DFS_forNorm(row, col - 1, RGB);
    }
    if (col < vec[0].size() - 1 && vec[row][col + 1] == RGB)
    {
        DFS_forNorm(row, col + 1, RGB);
    }
    if (row > 0 && vec[row - 1][col] == RGB)
    {
        DFS_forNorm(row - 1, col, RGB);
    }
    if (row < vec.size() - 1 && vec[row + 1][col] == RGB)
    {
        DFS_forNorm(row + 1, col, RGB);
    }
}

void testing(int n)
{
    vec.assign(n, vector<char>(n, 0));
    vec_forRG.assign(n, vector<char>(n, 0));
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < n; j++)
        {
            if (str[j] == 'R' || str[j] == 'G')
            {
                vec_forRG[i][j] = 'Y';
            }
            else
            {
                vec_forRG[i][j] = 'B';
            }
            vec[i][j] = str[j];
        }
    }
    
    int R = 0,G = 0,B = 0,cnt_norm = 0,cnt_forRG = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vec[i][j] == 'R')
            {
                DFS_forNorm(i, j, 'R');
                cnt_norm++;
            }
            if (vec_forRG[i][j] == 'Y')
            {
                DFS_forRG(i, j, 'Y');
                cnt_forRG++;
            }
            if (vec[i][j] == 'G')
            {
                DFS_forNorm(i, j, 'G');
                cnt_norm++;
            }
            if (vec[i][j] == 'B')
            {
                DFS_forNorm(i, j, 'B');
                cnt_norm++;
            }
            if (vec_forRG[i][j] == 'B')
            {
                DFS_forRG(i, j, 'B');
                cnt_forRG++;
            }
        }
    }
    cout << cnt_norm<< "\n";
    cout << cnt_forRG<< "\n";
}

int main()
{
    int n = 0;
    cin >> n;
    testing(n);
}