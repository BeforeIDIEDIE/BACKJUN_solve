#include <iostream>
#include <set>
#include<string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    set<string> chongchong;
    string on_chong = "ChongChong";
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string input1;
        string input2;
        cin >> input1 >> input2;
        if (input1==on_chong)
        {
            chongchong.insert(input2);
        }
        else if (input2 == on_chong)
        {
            chongchong.insert(input1);
        }
        else if (chongchong.count(input1) > 0)
        {
            chongchong.insert(input2);
        }
        else if (chongchong.count(input2) > 0)
        {
            chongchong.insert(input1);
        }
    }
    cout << chongchong.size()+1;//ÃÑÃÑÀÌµµ Ãß°¡!
}
