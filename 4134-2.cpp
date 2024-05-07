#include<iostream>
using namespace std;
//
//bool is_prime(long long n) 
//{
//    if (n == 0 || n == 1)
//    {
//        return false;
//    }
//    for (long long i = 2; i*i <= n; i++) 
//    {
//        if (n % i == 0)
//        {
//            return false;
//        }
//    }
//    return true;
//}

bool is_prime(long long n)
{
    if (n <= 1)
        return false;
    else if (n <= 3)
        return true;
    else if (n % 2 == 0 || n % 3 == 0)
        return false;

    long long i = 5;
    while (i * i <= n)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
        i += 6;
    }
    return true;
}

int main()
{
    // 입출력 스트림의 동기화를 끊음
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n = 0;
    cin >> n;

    for (long long  i = 0; i < n; i++)
    {
        long long input = 0;
        cin >> input;
        for (long long j = input;; j++)
        {
            if (is_prime(j))
            {
                cout << j<<"\n";
                break;
            }
        }
    }
}