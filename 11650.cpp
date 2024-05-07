//#include<iostream>
//
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//    int arr[2][100000];
//    int num = 0;
//    cin >> num;
//    for (int i = 0; i < num; i++)
//    {
//        cin >> arr[0][i] >> arr[1][i];
//    }
//    for (int j = 0; j < num; j++)
//    {
//        for (int k = 0; k < num - j - 1; k++)
//        {
//            if (arr[0][k] > arr[0][k + 1])
//            {
//                int bucket[2] = { arr[0][k],arr[1][k] };
//                arr[0][k] = arr[0][k + 1];
//                arr[1][k] = arr[1][k + 1];
//
//                arr[0][k + 1] = bucket[0];
//                arr[1][k + 1] = bucket[1];
//            }
//            else if (arr[0][k] == arr[0][k + 1])
//            {
//                if (arr[1][k] > arr[1][k + 1])
//                {
//                    int bucket[2] = { arr[0][k],arr[1][k] };
//                    arr[0][k] = arr[0][k + 1];
//                    arr[1][k] = arr[1][k + 1];
//
//                    arr[0][k + 1] = bucket[0];
//                    arr[1][k + 1] = bucket[1];
//                }
//            }
//        }
//    }
//    for (int i = 0; i < num; i++)
//    {
//        cout << arr[0][i] << " " << arr[1][i] << "\n";
//    }
//}//시간초과!

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
    if (a.x == b.x)
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
    else
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
        cout << arr[i].x << " " << arr[i].y<<"\n";
    }
}