#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int end_flag = 0;
    string end = ".";
    while (1)
    {
        int fail_flag = 0;
        vector<char>vec;
        string input;

        getline(cin, input);
        int count = 0;
        for (char c : input)
        {
            if ((input.size() == 1) && (input==end))
            {
                end_flag++;
                break;
            }
            if (c == '(')
            {
                vec.push_back('(');
            }
            else if (c == ')')
            {
                if (!vec.empty())
                {
                    if (vec.back() != '(')
                    {
                        fail_flag++;
                        break;
                    }
                    else
                    {
                        vec.pop_back();
                    }
                }
                else
                {
                    fail_flag++;
                    break;
                }
            }
            if (c == '[')
            {
                vec.push_back('[');
            }
            else if (c == ']')
            {
                if (!vec.empty())
                {
                    if (vec.back() != '[')
                    {
                        fail_flag++;
                        break;
                    }
                    else
                    {
                        vec.pop_back();
                    }
                }
                else
                {
                    fail_flag++;
                    break;
                }
            }
        }
        if (end_flag)
        {
            break;
        }
        if (fail_flag||(vec.size()>0))
        {
            cout << "no\n";
        }
        else
        {
            cout << "yes\n";
        }
    }
    return 0;
}