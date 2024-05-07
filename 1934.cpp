#include<iostream>
#include<string>
#include<map>
using namespace std;

int GCD(int a, int b)
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
    int n = 0;
    cin >> n;
    int arr[1000]= { 0 };
    for (int i = 0; i < n; i++)
    {
        int inp1 = 0, inp2 = 0;
        cin >> inp1 >> inp2;
        arr[i] = inp1 * inp2 / GCD(inp1, inp2);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<"\n";
    }
}
