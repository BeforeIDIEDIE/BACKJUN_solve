#include<iostream>

#include<algorithm>

#include<vector>

#include<string>

#include<set>

using namespace std;

/*
int main()
{
    vector<string> vec;

    int n = 0;
    cin >> n;
    int m = 0, count = 0;
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        vec.push_back(str);
    }
    for (int i = 0; i < m; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < n; j++)
        {
            if (vec[j] == str)
            {
                count++;
            }
        }
    }
    cout << count;
}
*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<string> s;

    int n = 0, m = 0;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }

    int count = 0;
    for (int i = 0; i < m; i++) 
    {
        string str;
        cin >> str;

        /*// 시간초과;;;
        for (string element : s) 
        {
            if (str == element) 
            {
                count++;
                break;
            }
        }
        */
        if (s.count(str) > 0) 
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
