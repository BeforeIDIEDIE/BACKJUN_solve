#include<iostream>

using namespace std;

int main()
{
    int target;
    cin >> target;//╪Ж ют╥б
    int correct = 1;
    int sum = 0;
    for (int i = 0; i < target; i++)
    {
        sum = i;
        int i_copy = i;
        while (i_copy > 0)
        {
            sum += (i_copy % 10);
            i_copy /= 10;
        }
        if (sum == target)
        {
            cout << i;
            return 0;
        }
    }
    cout << 0;
}