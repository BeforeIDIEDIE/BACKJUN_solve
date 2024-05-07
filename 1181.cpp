#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(string a, string b)
{
    if (a.size() == b.size())
    {
        return a < b;
    }
    return a.size() < b.size();
}

int main()
{
    int num;
    cin >> num;
    vector<string> arr(num);

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end(), compare);

    cout << arr[0] <<"\n";
    for (int i = 1; i < num; i++)
    {
        if (arr[i - 1] != arr[i])
        {
            cout << arr[i] << "\n";
        }
    }
}