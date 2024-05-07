#include<iostream>
#include<vector>
using namespace std;

int w(int a, int b, int c)
{
    if ((a <= 0) || (b <= 0) || (c <= 0))
    {
        return 1;
    }
    if ((a > 20) || (b > 20) || (c > 20))
    {
        return w(20, 20, 20);
    }
    if ((a < b) && (c > b))
    {
        return w(a, b, --c) + w(a, b - 1, c - 1) - w(a, b - 1, c);
    }
    return w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while (1)
    {
        int c1, c2, c3;
        cin >> c1 >> c2 >> c3;
        if (c1 == c2 == c3 == -1)
        {
            break;
        }
        cout <<"w("<<c1<<", "<<c2<<", "<<c3<<") = " << w(c1, c2, c3) << "\n";
    }
}