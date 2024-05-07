#include<iostream>
#include<set>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string input;
    set<string> arr;
    cin >> input;
    for (int i = 1; i <= input.size(); i++)
    {
        for (int j = 0; j <= input.size()-i; j++)
        {
            arr.insert(input.substr(j, i));
        }
    }
    cout << arr.size();
    
}
