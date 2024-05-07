#include<iostream>
#include<string>
#include<vector>
#include <cmath>
#include<algorithm>
using namespace std;

void e_zin_search(vector<int>& arr,int value,int start,int end)
{
    int half = (start+end) / 2;
    if (start > end)
    {
        cout << "0\n";
        return;
    }
    else if (arr[half] == value)
    {
        cout << "1\n";
        return;
    }
    else if (arr[half] > value)
    {
        end = half - 1;
        e_zin_search(arr, value, start, end);
    }
    else
    {
        start = half + 1;
        e_zin_search(arr, value, start, end);
    }
    
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n = 0;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int input = 0;
        cin >> input;
        arr.push_back(input);
    }
    sort(arr.begin(), arr.end());//sortÀÇ ÀÎÀÚ°¡ º¤ÅÍÀÏ¶§ ¼÷Áö!

    int m = 0;
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        int input = 0;
        cin >> input;
        e_zin_search(arr, input, 0, arr.size() - 1);
    }
}