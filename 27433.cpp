#include<iostream>

using namespace std;

long long factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 0)
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
    cout << factorial(input);
}