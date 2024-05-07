#include<iostream>
#include<string>
#include<map>
#include <cmath>
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n = 0,m = 0;
    cin >> n>>m;
    int count = 0;
    for (int i = n; i <= m; i++)
    {
        if (is_prime(i) > 0)
        {
            cout << i<<"\n";
        }
    }
    
}