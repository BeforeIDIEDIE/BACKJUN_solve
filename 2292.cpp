#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int min = 2, deungcha = 6, min_output = 0, period = 6;
    int n = 0,correct = 1;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
    }
    else
    {
        while (1)
        {
            if (n >= min && (min + period-1)>=n)
            {
                cout << correct + 1;
                break;
            }
            else
            {
                min += period;
                period += deungcha;
                correct++;
            }
        }
    }
    

}