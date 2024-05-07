
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class locate
{
public:
    int x, y;
};

bool compare(locate& a, locate& b)
{
    if (a.y == b.y)
    {
        if (a.x < b.x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        if (a.y < b.y)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int num;
    cin >> num;
    vector<locate> arr(num);
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i].x >> arr[i].y;
    }
    sort(arr.begin(), arr.end(), compare);
    for (int i = 0; i < num; i++)
    {
        cout << arr[i].x << " " << arr[i].y << "\n";
    }
}