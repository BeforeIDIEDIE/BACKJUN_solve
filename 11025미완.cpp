#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0, k = 0;
    cin >> n >> k;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        vec[i] = i + 1;
    }

    int n_copy = n;
    int r = 0;
    while (vec.size() > 1)
    {
        r = (r + k - 1) % n_copy;
        vec.erase(vec.begin() + r);
        n_copy--;
    }
    cout << vec[0] ;
}