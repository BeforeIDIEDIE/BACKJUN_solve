#include<iostream>

using namespace std;

int main()
{
    int arr[100] = { 0 }, num_max = 0, cur = 0 ,num,num_end;
    cin >> num >> num_end;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < num; j++)
    {
        for (int k = 0; k < num; k++)
        {
            for (int l = 0; l < num; l++)
            {
                if (((j == k) || (k == l))||(j==l))
                {
                    continue;
                }
                cur = arr[j] + arr[k] + arr[l];
                if ((cur > num_max))
                {
                    if (num_end >= cur)
                    {
                        num_max = cur;
                    }
                    
                }
            }
        }
    }//시간복잡도 O(n^3)....ㄷㄷ
    cout << num_max;
}