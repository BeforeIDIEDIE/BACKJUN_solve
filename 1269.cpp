#include<iostream>

#include<algorithm>

#include<vector>

#include<string>

#include<set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    set<int> inp1;
    set<int> inp2;


    int n = 0, m = 0,count=0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int input = 0;
        cin >> input;
        inp1.insert(input);
    }
    int gyo_jip_hap = 0;
    for (int i = 0; i < m; i++)
    {
        int input = 0;
        cin >> input;
        inp2.insert(input);
        if (inp1.count(input) > 0)
        {
            gyo_jip_hap++;
        }
    }
    count = n + m - (2*gyo_jip_hap);
    cout << count;

}