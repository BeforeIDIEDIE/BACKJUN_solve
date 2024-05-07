#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = n-1; i >0; i--)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
