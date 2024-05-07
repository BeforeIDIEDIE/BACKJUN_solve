#include<iostream>
#include<string>

#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int input = 0, front = 0;
    cin >> input;
    vector<int> vec;

    for (int i = 0; i < input; i++)
    {
        string input2;
        cin >> input2;
        if (input2 == "push")
        {
            int input3 = 0;
            cin >> input3;
            vec.push_back(input3);
        }
        else if (input2 == "pop")
        {
            if (front == vec.size())
            {
                cout << "-1\n";
            }
            else
            {
                cout << vec[front++] << "\n";
            }
        }
        else if (input2 == "size")
        {
            cout << vec.size() - front<<"\n";
        }
        else if (input2 == "empty")
        {
            if (vec.size() - front == 0)
            {
                cout << "1\n";
            }
            else
            {
                cout << "0\n";
            }
        }
        else if (input2 == "front")
        {
            if (vec.size() - front == 0)
            {
                cout << "-1\n";
            }
            else
            {
                cout << vec[front]<<"\n";
            }
        }
        else if (input2 == "back")
        {
            if (vec.size() - front == 0)
            {
                cout << "-1\n";
            }
            else
            {
                cout << vec[vec.size()-1]<<"\n";
            }
        }
    }
}