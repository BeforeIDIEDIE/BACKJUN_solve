#include<iostream>

using namespace std;

int main()
{
    int c_5 = 0, c_3 = 0, gram, min= 1000000000,saperate_gram;
    cin >> gram;
    c_5 = gram / 5; 
    gram %= 5;
    for (int i = c_5; i > -1; i--)
    {
        saperate_gram = gram + (5 * (c_5 - i));
        if (saperate_gram % 3 != 0)
        {
            continue;
        }
        else
        {
            c_3 = saperate_gram / 3;
            if (min > c_3 + i)
            {
                min = c_3 + i;
            }
        }
    }
    if (min == 1000000000)
    {
        cout << "-1";
    }
    else
    {
        cout << min;
    }
}
