#include<iostream>
#include<vector>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   
    vector<int> vec;
    int n = 0,m = 0,sum = 0;
    cin >> n >> m;;

    for (int i = 0; i < n; i++)
    {
        int input = 0;
        cin >> input;
        sum += input;
        vec.push_back(sum);
    }
    int max = 0;
    for (int i = m; i < n; i++)
    {
        if (i == m)
        {
            max = vec[i-1];
        }
        else
        {
            if (max < (vec[i] - vec[i - m]))
            {
                max = (vec[i] - vec[i - m]);
            }
        }
    }
    if (n == m)
    {
        cout << vec[vec.size() - 1];
    }
    else
    {
        cout << max;
    }

}
