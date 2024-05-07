#include<iostream>

using namespace std;

long long fib(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 0)
    {
        return 0;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int input = 0;
    cin >> input;
    cout << fib(input);
}