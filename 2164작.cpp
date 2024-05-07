#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    // 입출력 스트림의 동기화를 끊음
    ios_base::sync_with_stdio(false);
    // cin과 cout의 동기화를 끊음
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