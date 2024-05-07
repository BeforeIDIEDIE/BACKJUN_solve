#include<iostream>

#include<string>

#include<map>


using namespace std;

int main()
{
    map<int, int> Card;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num = 0;
        cin >> num;

        auto key = Card.find(num);
        if (key != Card.end())
        {
            key->second++;
        }
        else
        {
            Card[num]++;
        }
    }
    int m = 0;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int num = 0;
        cin >> num;
        auto key = Card.find(num);
        if (key != Card.end())
        {
            cout<<key->second<<" ";
        }
        else
        {
            cout << "0 ";;
        }
    }

}