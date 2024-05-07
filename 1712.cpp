#include<iostream>

using namespace std;

int main()
{

    long long int a = 0, b= 0, c = 0;
    cin >> a >> b >> c;
    long long int result = 0;
    if (b >= c)
    {
        printf("%d", -1);
    }
    else
    {
        result = a / (c - b);
        result++;
        cout << result;
    }

}