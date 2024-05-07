#include<iostream>

#include<string>

#include<set>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<string> s;
    set<string> MR_nobody;

    int n = 0;
    int m = 0;


    string str;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        s.insert(str);
    }
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> str;
        if (s.count(str) > 0)
        {
            MR_nobody.insert(str);
            count++;
        }
    }
    cout << MR_nobody.size()<< "\n";
    
    for (string man : MR_nobody)
    {
        cout << man << "\n";
    }
}