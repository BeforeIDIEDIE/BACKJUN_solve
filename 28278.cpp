#include<iostream>
#include<vector>



using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> stack;

    int input = 0;
    cin >> input;
    for (int i = 0; i < input; i++)
    {
        int input2 = 0;
        cin >> input2;

        switch (input2)
        {
        case 1:
        {
            int input3 = 0;
            cin >> input3;
            stack.push_back(input3);
            break;
        }
        case 2:
        {
            if (stack.size() == 0)
            {
                cout << "-1\n";
            }
            else
            {
                cout << stack[stack.size() - 1] << "\n";
                stack.pop_back();//벡터의 가장 마지막 요소를 제거
            }
            break;
        }
        case 3:
        {
            cout <<stack.size()<<"\n";
            break;
        }
        case 4:
        {
            if (stack.size() == 0)
            {
                cout << "1\n";
            }
            else
            {
                cout << "0\n";
            }
            break;
        }
        case 5:
        {
            if (stack.size() == 0)
            {
                cout << "-1\n";
            }
            else
            {
                cout << stack[stack.size() - 1] << "\n";
            }
            break;
        }
        }
    }
    
}