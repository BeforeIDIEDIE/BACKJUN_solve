#include<iostream>
#include<string>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n = 0;
    cin >> n;
    cin.ignore();//������ ���� �ٹٲ� ���ſ뵵, getchar()���-> getchar�� ������.
    for (int i = 0; i < n; i++)
    {
        string input;
        getline(cin, input);//������ �о���� �Լ�
        int count = 0;
        for (char c : input)
        {
            if (c == '(')
            {
                count++;
            }
            else if (c == ')')
            {
                count--;
            }
            if (count < 0)
            {
                break;
            }
        /*
            char input = 0;
            input = getchar();//���ڸ� �ϳ��� �б⿡ ���� �Լ��� ���Ѵ�.
            if (input == '\n')
            {
                break;
            }
            if (input == '(')
            {
                count++;
            }
            else
            {
                count--;
            }
        */
        }
        if (count != 0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
        
    }
    return 0;
}