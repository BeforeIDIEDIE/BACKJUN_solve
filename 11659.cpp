#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> vec;
    int n = 0, m = 0;
    cin >> n >> m;
    int sum_all = 0;
    for (int i = 0; i < n; i++)
    {
        int input = 0;
        cin >> input;
        sum_all += input;
        vec.push_back(sum_all);
    }


    for (int i = 0; i < m; i++)
    {
        int input1 = 0, input2 = 0, sum = 0;
        cin >> input1 >> input2;
        if (input1 == 1)
        {
            sum = vec[input2 - 1];
        }
        else
        {
            sum = vec[input2 - 1] - vec[input1 - 2];
        }

        cout << sum << "\n";
    }
}
