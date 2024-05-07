#include<iostream>
#include<string>
#include<map>
using namespace std;

long long int GCD(long long int a, long long int b)
{
    if (b == 0) {
        return a;
    }
    return GCD(b, a % b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n = 0,m = 0;
    cin >> n>>m;
    cout<<n * m / GCD(n, m);
}
