#include<iostream>

using namespace std;

int main()
{
    int sum = 0,num = 0, i = 0, arr[5] = { 0 };
    while (i != 5)
    {
        cin >> arr[i];
        i++;
    }
    for (int j = 0; j < 5; j++)
    {
        for (int k = 0; k < 5 - j - 1; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                int bucket = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = bucket;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    cout << sum / 5 << endl << arr[2];
}