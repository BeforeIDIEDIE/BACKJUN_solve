#include<iostream>
#include<set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    set<long long>zegob;
    int count = 0;
    long long min, max;
    for (long long i = max; i >= min; i--)
    {
        int flag = 0;
        if (i == max)
        {
            for (long long j = 2; j * j < i; j++)
            {
                zegob.insert(j * j);//max�� ���� �������� ��� set�� ������ �ڿ� ���ķ� i�� 1���� �ٿ������� ���� ������ ����
            }
        }
        else
        {

        }
    }
}