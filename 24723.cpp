#include<iostream>

using namespace std;

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int input = 0;
    cin >> input;
    int result = 1;
    for (int i = input; i > 0; i--)
    {
        result *= i;
    }

    
    cout << result;
}