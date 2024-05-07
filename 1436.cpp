#include<iostream>
#include<string>
using namespace std;

int main()
{
    // 입출력 스트림의 동기화를 끊음
    ios_base::sync_with_stdio(false);

    // cin과 cout의 동기화를 끊음
    cin.tie(NULL);
    int count = 0, n = 0;

    cin >> n;
    string str,targer = "666";
    for (int i = 666; true; i++)
    {
        str = to_string(i);
        if (str.find(targer) != string::npos)//이 부분 설명
        {
            count++;
        }
        if (count == n)
        {
            cout << i;
            return 0;
        }
    }

}