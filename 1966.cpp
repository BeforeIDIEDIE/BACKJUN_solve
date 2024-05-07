#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<set>
#include<functional>

using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int set_num = 0,idx = 0;
        cin >> set_num>>idx;
        vector<int> idx_save;
        std::set<int, std::greater<int>> idx_sort;
        map<int, int> idx_and_weight;   
        int arr_weight[9] = { 0,0,0,0,0,0,0,0,0 };
        for (int j = 0; j < set_num ;j++)
        {
            int weight = 0;
            cin >> weight;
            idx_save.push_back(j);
            idx_sort.insert(weight);
            idx_and_weight[j] = weight;
            arr_weight[weight - 1]++;
        }
        int count = 0;
        while (1)
        {
            if (idx_and_weight[idx_save[0]] != *idx_sort.begin())
            {
                idx_save.push_back(idx_save[0]);
                idx_save.erase(idx_save.begin());
            }
            else
            {
                count++;
                if (idx_save[0] == idx)
                {
                    cout << count << "\n";
                    break;
                }
                if (arr_weight[idx_and_weight[idx_save[0]] - 1] == 1)
                {
                    idx_sort.erase(idx_sort.begin());
                }
                else
                {
                    arr_weight[idx_and_weight[idx_save[0]] - 1]--;
                }
                idx_save.erase(idx_save.begin());
                
            }
        }
    }
}
