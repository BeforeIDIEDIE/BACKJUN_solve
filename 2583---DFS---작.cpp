#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> paper(100, vector<int>(100, 1));

int empty(int n, int m, int x, int y)
{
    int count = 1;
    paper[x][y] = 0;

    if (y > 0 && paper[x][y - 1] > 0)
    {
        count += empty(n, m, x, y - 1);
    }
    if (y < m - 1 && paper[x][y + 1] > 0)
    {
        count += empty(n, m, x, y + 1);
    }
    if (x > 0 && paper[x - 1][y] > 0)
    {
        count += empty(n, m, x - 1, y);
    }
    if (x < n - 1 && paper[x + 1][y] > 0)
    {
        count += empty(n, m, x + 1, y);
    }
    return count;
}

int main()
{
    int n = 0, m = 0, p = 0;
    cin >> n >> m >> p;
    for (int i = 0; i < p; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int j = x1; j < x2; j++)
        {
            for (int k = y1; k < y2; k++)
            {
                paper[k][j] = 0;
        
            }
        }
    }

    queue<pair<int, int>> next;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (paper[i][j] == 1)
            { 
                next.push(make_pair(i, j));
            }
        }
    }

    vector<int> counts;

    while (!next.empty())
    {
        int x = next.front().first;
        int y = next.front().second;
        next.pop();
        if (paper[x][y] > 0)
        {
            int depth = empty(n, m, x, y);
            counts.push_back(depth);
        }
    }

    sort(counts.begin(), counts.end());
    cout << counts.size() << endl;

    for (size_t i = 0; i < counts.size(); i++)
    {
        cout << counts[i];
        if (i != counts.size() - 1)
            cout << ' ';
    }
    cout << '\n';

    return 0;
}
