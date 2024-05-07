#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int input = 0;
    int arr[2001] = { 0 };
    cin >> input;
    for (int i = 0; i < input; i++)
    {
        int num_input = 0;
        cin >> num_input;
        arr[num_input + 1000] = 1;
    }
    for (int i = 0; i <= 2000; i++)
    {
        if (arr[i] == 1)
        {
            cout << (i - 1000) << " ";
        }
    }
}