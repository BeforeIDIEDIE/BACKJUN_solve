#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<long long int> result;
    int input = 0;
    cin >> input;
    for (int i = 0; i < input; i++)
    {
        long long int a, b;
        cin >> a >> b;
        long long int result2 = 1;
        for (int j = 0; j < b; j++)
        {
            if (a == j)
            {
                break;
            }
            result2 *= b - j;
            result2 /= j + 1;
            
        }
        result.push_back(result2);
    }
    for (int i = 0; i < input; i++)
    {
        cout << result[i] << "\n";
    }
}