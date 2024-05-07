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
    cin.ignore();//버퍼의 띄어쓰기 줄바꿈 제거용도, getchar()대용-> getchar은 느리다.
    for (int i = 0; i < n; i++)
    {
        string input;
        getline(cin, input);//한줄을 읽어오는 함수
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
            input = getchar();//문자를 하나씩 읽기에 느린 함수에 속한다.
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