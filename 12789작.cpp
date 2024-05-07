#include<iostream>

#include<vector>

using namespace std;

int main()
{
    // ����� ��Ʈ���� ����ȭ�� ����
    ios_base::sync_with_stdio(false);
    // cin�� cout�� ����ȭ�� ����
    cin.tie(NULL);
    int n = 0,input_next = 1;
    
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int input = 0;
        cin >> input;
        if (input == input_next)
        {
            input_next++;
        }
        else
        {
            while (!vec.empty())
            {
                if ((input_next == vec.back()))
                {
                    input_next++;
                    vec.pop_back();
                }
                else
                {
                    break;
                }
            }
            vec.push_back(input);
        }
    }
    int fail_flag = 0;
    while (!vec.empty())
    {
        if (input_next == vec.back())
        {
            input_next++;
            vec.pop_back();
        }
        else
        {
            fail_flag++;
            break;
        }
    }
    
    if (fail_flag)
    {
        cout << "Sad";
    }
    else
    {
        cout << "Nice";
    }
}