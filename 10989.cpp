#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    // ����� ��Ʈ���� ����ȭ�� ����
    ios_base::sync_with_stdio(false);

    // cin�� cout�� ����ȭ�� ����
    cin.tie(NULL);

    vector<int> arr;
    int input = 0, input2;
    cin >> input;
    for (int i = 0; i < 10001; i++)
    {
        arr.push_back(0);
    }

    for (int i = 0; i < input; i++)
    {
        cin >> input2;
        arr[input2]++;
    }

    for (int i = 0; i < 10001; i++)
    {
        for (int j = 0; j < arr[i]; j++)
        {
            cout << i << "\n";
        }
    }
}