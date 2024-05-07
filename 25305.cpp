#include<iostream>

using namespace std;

int main()
{
    int num = 0,num_nd = 0, i = 0, arr[1000] = { 0 };
    cin >> num>>num_nd;
    while (i != num)
    {
        cin >> arr[i];
        i++;
    }
    for (int j = 0; j < num; j++)
    {
        for (int k = 0; k < num - j - 1; k++)
        {
            if (arr[k] < arr[k + 1])
            {
                int bucket = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = bucket;
            }
        }
    }
    cout << arr[num_nd - 1];
}