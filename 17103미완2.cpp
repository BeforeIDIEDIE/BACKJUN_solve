#include<iostream>
#include<set>
using namespace std;


set<int> prime;
bool is_prime(int n)
{
    if (n <= 1)
        return false;
    else if (n <= 3)
        return true;
    else if (n % 2 == 0 || n % 3 == 0)
        return false;

    int i = 5;

    while (i * i <= n)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
        i += 6;
    }
    prime.insert(i);
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int input = 0, partition = 0;
        cin >> input;
        set<int>temp;
        
        for (int j = 2; j <= input/2; j++)
        {
            if (((prime.find(j)!=prime.end())&& (prime.find(input-j) != prime.end()))||(is_prime(j) && is_prime(input - j)))
            {
                temp.insert(j);
            }
        }
        cout << temp.size()<<"\n";
    }
}