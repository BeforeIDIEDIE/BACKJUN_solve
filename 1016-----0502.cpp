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
                zegob.insert(j * j);//max의 제곱 ㄴㄴ수를 모두 set에 저장한 뒤에 이후로 i를 1개씩 줄여나가며 제곱 ㄴㄴ수 검출
            }
        }
        else
        {

        }
    }
}