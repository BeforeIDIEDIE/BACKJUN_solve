#include<iostream>
#include<vector>
using namespace std;

vector<int>path;
vector<bool>used;
int N = 0;
int M = 0;

void backtracking(int cur_search)
{
    if (cur_search == M)
    {
        if (M != 1)
        {
            int error = 0;
            for (int i = 0; i < M - 1; i++)
            {
                if (path[i] > path[i + 1])
                {
                    error=1;
                    break;
                }
            }
            if (error)
            {
                return;
            }
        }
        for (int i = 0; i < M; i++)
        {
            cout << path[i] << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = 0; i < N; i++)
    {
        if (!used[i])
        {
            used[i] = true;
            path[cur_search] = i+1;
            backtracking(cur_search+1);
            used[i] = false;

        }
    }
}

int main()
{
    cin >> N >> M;
    path.resize(M);
    used.assign(N, false);
    backtracking(0);
}
