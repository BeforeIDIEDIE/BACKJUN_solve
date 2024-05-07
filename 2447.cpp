#include<iostream>

using namespace std;

void print_star(int n)
{
    if (n / 3 == 1)
    {
        cout<<"***"
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n = 0;
    cin >> n;
    print_star(n);
}
//꼭 풀길 바란다.