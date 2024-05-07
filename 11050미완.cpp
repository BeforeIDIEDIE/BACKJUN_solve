#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int input = 0;
    cin >> input;

    vector<vector<int>> arr(input, vector<int>(2));//이차원 벡터....!

    for (int i = 0; i < input; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }

    for (int i = 0; i < input; i++)
    {
        long long int fac1 = 1, fac2 = 1, count = 0;
        for (int j = arr[i][1]; j > 0; j--)
        {
            if (count == arr[i][0])
            {
                break;
            }
            fac1 *= j;
            count++;
        }
        for (int j = arr[i][0]; j > 0; j--)
        {
            fac2 *= j;
        }
        cout << fac1 / fac2 << "\n";
    }
    return 0;
}