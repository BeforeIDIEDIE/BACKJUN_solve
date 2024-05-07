#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n = 0;
    cin >> n;
    int i = 5;
    while (i > 0)
    {
        for (int j = 5-i; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = n - i; j > 0; j--)
        {
            cout << " ";
        }
        for (int j = n - i; j > 0; j--)
        {
            cout << " ";
        }
        
        i--;
        cout << "\n";
    }
    i-=2;
    while (i>0)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = n - i; j > 0; j--)
        {
            cout << " ";
        }
        for (int j = n - i; j > 0; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        i--;
        cout << "\n";
    }

}
