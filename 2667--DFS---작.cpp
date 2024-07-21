#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> vec;

int DFS(int row, int col)
{
    int count = 1;
    vec[row][col] = 0;
    if (col > 0 && vec[row][col - 1] > 0)
    {
        count += DFS(row, col - 1);
    }
    if (col < vec.size() - 1 && vec[row][col + 1] > 0)
    {
        count += DFS(row, col + 1);
    }
    if (row > 0 && vec[row - 1][col] > 0)
    {
        count += DFS(row - 1, col);
    }
    if (row < vec.size() - 1 && vec[row + 1][col] > 0)
    {
        count += DFS(row + 1, col);
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vec.assign(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < n; j++)
        {
            vec[i][j] = str[j] - '0';
        }
    }

    vector<int> cnt;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vec[i][j] == 1)
            {
                int depth = DFS(i, j);
                cnt.push_back(depth);
            }
        }
    }

    sort(cnt.begin(), cnt.end());
    cout << cnt.size() << "\n";
    for (int i : cnt)
    {
        cout << i << "\n";
    }

    return 0;
}
//
//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<vector<int>> vec;
//
//int DFS(int n, int row, int col)
//{
//    int count = 1;
//    vec[row][col] = 0;
//
//
//    if (col > 0 && vec[row][col - 1] > 0)
//    {
//        count += DFS(n, row, col - 1);
//    }
//    if (col < n - 1 && vec[row][col + 1] > 0)
//    {
//        count += DFS(n, row, col + 1);
//    }
//    if (row > 0 && vec[row - 1][col] > 0)
//    {
//        count += DFS(n, row - 1, col);
//    }
//    if (row < n - 1 && vec[row + 1][col] > 0)
//    {
//        count += DFS(n, row + 1, col);
//    }
//    return count;
//}
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    int n = 0;
//    cin >> n;
//    vec.assign(n, vector<int>(n, 0));
//    for (int i = 0; i < n; i++)
//    {
//        string str;
//        cin >> str;
//        for (int j = 0; j < n; j++)
//        {
//            vec[i][j] = str[j] - '0';
//        }
//    }
//    queue<pair<int, int>> next;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            if (vec[i][j] == 1)
//            {
//                next.push(make_pair(i, j));
//            }
//        }
//    }
//
//
//    vector<int> cnt;
//
//    while (!next.empty())
//    {
//        int col = next.front().first;
//        int row = next.front().second;
//        next.pop();
//        if (vec[row][col] > 0)
//        {
//            int depth = DFS(n, row, col);
//            cnt.push_back(depth);
//        }
//    }
//    sort(cnt.begin(), cnt.end());
//    cout << cnt.size() << "\n";
//    for (int i : cnt)
//    {
//        cout << i << "\n";
//    }
//}