#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int max_index = 0, max = 0;
    for (int i = 1; i <= 5; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            int input = 0;
            cin >> input;
            sum += input;
        }
        if (sum > max)
        {
            max = sum;
            max_index = i;
        }
    }
    cout << max_index<<" "<<max;
}