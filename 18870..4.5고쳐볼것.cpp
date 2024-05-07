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


    int size = 0;
    cin >> size;

    map<int, int> input_and_rank;
    set<int> sorted_inputs;
    vector<int> inputs;

    for (int i = 0; i < size; i++)
    {
        int input = 0;
        cin >> input;
        inputs.push_back(input);
        sorted_inputs.insert(input);
    }

    for (int i = 0; i < size; i++)
    {
        auto it = sorted_inputs.find(inputs[i]);
        long long int index = distance(sorted_inputs.begin(), it);
        input_and_rank[inputs[i]] = index;
    }

    for (int i = 0; i < size; i++)
    {
        cout << input_and_rank[inputs[i]] << " ";
    }
}