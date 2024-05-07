#include<iostream>
#include<string>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

bool reverse_dictionary(string a, string b)
{
    return !(a < b);
}


int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);
    int n = 0;
    cin >> n;

    
    set<string, greater<string>> employee;
    string str,state;
    for (int i = 0; i < n; i++)
    {
        cin >> str>>state;
        if (state == "enter")
        {
            employee.insert(str);
        }
        else if (state == "leave")
        {
            employee.erase(str);
        }
    }
    
    /*
    vector<string> employee;
    string str, state;
    for (int i = 0; i < n; i++)
    {
        cin >> str >> state;
        if (state == "enter")
        {
            employee.push_back(str);
        }
        else if (state == "leave")
        {
            auto it = find(employee.begin(), employee.end(), str);//find의 반환값은 반복자이다. auto랑 반복자 설명할 것!
            if (it != employee.end())
            {
                employee.erase(it);
            }
        }
    }
    sort(employee.begin(), employee.end(), reverse_dictionary);
    
    for (int i = 0; i < employee.size(); i++)
    {
        cout << employee[i]<<"\n";
    }
    */
    
    for (string name : employee)
    {
        cout << name << "\n";
    }

}