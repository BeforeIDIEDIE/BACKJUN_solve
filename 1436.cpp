#include<iostream>
#include<string>
using namespace std;

int main()
{
    // ����� ��Ʈ���� ����ȭ�� ����
    ios_base::sync_with_stdio(false);

    // cin�� cout�� ����ȭ�� ����
    cin.tie(NULL);
    int count = 0, n = 0;

    cin >> n;
    string str,targer = "666";
    for (int i = 666; true; i++)
    {
        str = to_string(i);
        if (str.find(targer) != string::npos)//�� �κ� ����
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