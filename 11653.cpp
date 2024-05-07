#include<iostream>
#include<string>
#include<map>
#include <cmath>
#include<vector>
using namespace std;

bool is_prime(int n) {
    if (n <= 1)
        return false;
    else if (n <= 3)
        return true;
    else if (n % 2 == 0 || n % 3 == 0)
        return false;

    int i = 5;
    while (i * i <= n) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
        i += 6;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int input = 0;
    cin >> input;
    if (input == 1)
    {
        return 0;
    }
    for (int i = 2; i <= input; i++)
    {
        while (input % i == 0)
        {
            cout << i << "\n";
            input /= i;
        }
    }
}
