#include<iostream>
#include<string>
#include<map>
#include <cmath>
#include<vector>
using namespace std;

bool is_prime(int n) {//에라토스테라의 체 알고리즘 숙지!!
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
    int size = 0;
    vector<int> vec;
    while (true)
    {
        int input = 0;
        cin >> input;
        size++;
        if (input == 0)
        {
            break;
        }
        vec.push_back(input);
    }
    for (int i : vec)
    {
        int count = 0;
        for (int j = i + 1; j <= 2 * i; j++)
        {
            if (is_prime(j) > 0)
            {
                count++;
            }
        }
        cout << count << "\n";
    }
}
