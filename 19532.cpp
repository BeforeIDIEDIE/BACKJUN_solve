#include<iostream>

using namespace std;

int main()
{
    int flag = 0, a=0, b=0, c=0, d=0, e=0, f=0,x=0,y=0;
    cin >> a >> b >> c >> d >> e >> f;

    for (int i = -999; i < 1000; i++)
    {
        for (int j = -999; j < 1000; j++)
        {
            if (((a * i) + (b * j) == c) && ((d * i) + (e * j) == f))
            {
                x = i;
                y = j;
                flag++;
            }
        }
    }
    if (flag == 1)
    {
        cout << x << " " << y;
    }
    else
    {
        cout << " ";
    }
}