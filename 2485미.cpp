#include<iostream>
#include<string>
#include<map>
using namespace std;

int GCD(int a, int b)
{
    if (b == 0) {
        return a;
    }
    return GCD(b, a % b);
}//�ð��ʰ��ɽ� �ݺ������� ����

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n = 0;
    cin >> n;
    int first = 0, end = 0, pre_input = 0, pre_diff = 0, min_GCD = 0,pre_GCD = 0;
    cin >> first;
    pre_input = first;

    for (int i = 1; i < n; i++)
    {
        int input = 0;
        cin >> input;
        pre_diff = input - pre_input;
        if (i == 1)
        {
            min_GCD = pre_GCD;
        }
        
    }

    //(��-ó��)/GCD - �Էµ� ��  +1�� ��
}
