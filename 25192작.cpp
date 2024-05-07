#include<iostream>

#include<string>

#include<set>


using namespace std;

int main()
{
    int n = 0, set_all_size = 0;;
    cin >> n;

    set<string> arr;
    
    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        if (input != "ENTER")
        {
            arr.insert(input);
        }
        else
        {
            set_all_size += arr.size();
            arr.clear();
        }
    }
    set_all_size += arr.size();
    cout << set_all_size;
}