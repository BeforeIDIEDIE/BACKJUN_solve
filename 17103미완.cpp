#include<iostream>
#include<string>
#include<map>
#include <set>
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

    int n = 0;

    int arr[100] = { 0 };
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        set<int> element;
        int input = 0;
        cin >> input;
        for (int j = 2; j < input; j++)
        {
            if (is_prime(j) > 0)
            {
                if (is_prime(input - j) > 0)
                {
                    if (element.count(input - j) == 0)
                    {
                        element.insert(j);
                    }
                }
            }
        }
        arr[i] = element.size();
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<"\n";
    }

}