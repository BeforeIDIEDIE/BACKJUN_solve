//«œ≥Û«œ≥Û¿Ã
#include<iostream>

using namespace std;



void rhanoi(int n, char from, char aux, char to)
{
    if (n == 1)
    {
        cout << from <<" " << to << "\n";
    }
    else
    {
        rhanoi(n - 1, from, to, aux);
        cout << from << " " << to << "\n";
        rhanoi(n - 1, aux, from, to);
    }
}

void hanoi(int n)
{
    rhanoi(n, '1', '2', '3');
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int input = 0;
    cin >> input;
    int count = 1;
    for (int i = 0; i < input; i++)
    {
        count *= 2;
    }
    cout <<count-1<<"\n";
    hanoi(input);
}