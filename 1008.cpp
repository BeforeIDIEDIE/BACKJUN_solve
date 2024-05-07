#include<iostream>
using namespace std;

int main()
{
    int A, B,i;
    cin >> A >> B;
    cout << A / B<<".";
    A %= B;
    A *= 10;
    for (i = 0; i < 10; i++)
    {
        if (A / B == 0)
        {
            break;
        }
        else
        {
            cout << A / B;
            A %= B;
            if (A % B == 0)
            {
                break;
            }
            else
            {
                A *= 10;
            }
        }
    }
}