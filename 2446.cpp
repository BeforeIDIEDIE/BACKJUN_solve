#include<iostream>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = i; j < n; j++)
            cout << "*";
        for (int j = i; j < n - 1; j++)
            cout << "*";
        cout << "\n";
    }
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = i; j < n; j++)
            cout << "*";
        for (int j = i; j < n - 1; j++)
            cout << "*";
        cout << "\n";
    }
}