#include<iostream>
#include<vector>
using namespace std;

vector<int> path;
int n = 0;
int m = 0;

void backtracking()
{
    if (path.size() == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << path[i]<<" ";
        }
        cout << "\n";
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        path.push_back(i);
        backtracking();
        path.pop_back();
    }
}

int main()
{
    cin >> n >> m;
    backtracking();
}
