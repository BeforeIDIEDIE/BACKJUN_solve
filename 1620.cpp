#include<iostream>
#include<string>
#include<map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<int, string> Picka_name;
    map<string, int> Picka_num;
    map<int, string> command;
    int n = 0, m = 0;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        string str;
        cin >> str;
        Picka_name[i] = str;
        Picka_num[str] = i;
    }
    for (int i = 0; i < m; i++)
    {
        string str;
        cin >> str;
        command[i] = str;
    }

    for (int i = 0; i < m; i++) 
    {

        if (command[i][0] >= 'A' && command[i][0] <= 'Z')
        { 
            cout << Picka_num[command[i]] << "\n";
        }
        else 
        { 
            int num = stoi(command[i]);
            cout << Picka_name[num] << "\n"; 
        }
    }
    return 0;
}