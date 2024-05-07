#include<iostream>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> vec;
    int input = 0;
    long long int sum = 0;
    cin >> input;
    for (int i = 0; i < input; i++)
    {
        int input2 = 0;
        cin >> input2;
        if (input2 == 0)
        {
            sum -= vec[vec.size() - 1];
            vec.pop_back();
        }
        else
        {
            sum += input2;
            vec.push_back(input2);
        }
    }
    cout << sum;
}