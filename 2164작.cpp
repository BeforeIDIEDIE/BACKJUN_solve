#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    // ����� ��Ʈ���� ����ȭ�� ����
    ios_base::sync_with_stdio(false);
    // cin�� cout�� ����ȭ�� ����
    cin.tie(NULL);
    int n = 0;
    vector<int> vec;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        vec.push_back(i);
    }
    int cur = 0;
    for (int i = 0; i < n - 1; i++)
    {
        vec.push_back(vec[cur+1]);
        cur += 2;
    }
    cout << vec[cur];
}