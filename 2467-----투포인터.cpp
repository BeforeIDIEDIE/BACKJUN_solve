#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n = 0, is_all_minus = 1, is_all_plus = 1;
    vector<ll> vec;
    cin >> n ;
    for (int i = 0; i < n; i++)
    {
        int input = 0;
        cin >> input;
        if (input > 0)
        {
            is_all_minus = 0;
        }
        if (input < 0)
        {
            is_all_plus = 0;
        }
        vec.push_back(input);
    }
    if (is_all_minus)
    {
        sort(vec.rbegin(), vec.rend());
        cout << vec[1] <<" "<< vec[0];
    }
    else if (is_all_plus)
    {
        sort(vec.begin(), vec.end());
        cout << vec[0]<< " " << vec[1];
    }
    else
    {
        sort(vec.begin(), vec.end());
        ll right = n - 1,left = 0,closest= 1000000000,cur_right = right,cur_left = left;
        while (left < right)
        {
            ll sum = vec[right] + vec[left];
            if (abs(closest) > abs(sum))
            {
                closest = sum;
                cur_right = right;
                cur_left = left;
            }
            if (sum < 0)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        cout << vec[cur_left]<<" " << vec[cur_right];
    }
}