#include<iostream>

using namespace std;

int num0 = 0,num1 = 0;

int memorize[40] = { 0 };

int fibonacci(int n) 
{
    if (n == 0) {
        num0++;
        return 0;
    }
    else if (n == 1) 
    {
        num1++;
        return 1;
    }
    else 
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[40][2];
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        num0 = 0;
        num1 = 0;
        int input = 0;
        cin >> input;
        fibonacci(input);
        arr[i][0] = num0;
        arr[i][1] = num1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i][0] << " " << arr[i][1] << "\n";
    }
}