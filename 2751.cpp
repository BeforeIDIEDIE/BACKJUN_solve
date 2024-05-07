#include<iostream>

#include<vector>

using namespace std;


/*
int main()
{
    int num, i = 0, arr[1000000] = { 0 };
    cin >> num;
    while (i != num)
    {
        cin >> arr[i];
        i++;
    }
    for (int j = 0; j < num; j++)
    {
        for (int k = 0; k < num - j - 1; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                int bucket = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = bucket;
            }
        }
    }
    cout << arr[0] << endl;
    for (int i = 1; i < num; i++)
    {
        if (arr[i-1] != arr[i])
        {
            cout << arr[i] << endl;
        }
    }
}
*/// 버블정렬(시간초과!)

void swap(int* a, int* b)
{
    int bucket = *a;
    *a = *b;
    *b = bucket;
}

void DownHeap(vector<int>& arr, int n, int i)
{
    int root = i;
    int left = ((2 * i) + 1);
    int right = ((2 * i) + 2);

    if (left < n && arr[left] > arr[root])
        root = left;

    if (right < n && arr[right] > arr[root])
        root = right;

    if (root != i) {
        swap(arr[i], arr[root]);
        DownHeap(arr, n, root);
    }
}

void HeapSort(vector<int>& arr, int n)
{
    for (int i = (n / 2 - 1); i > -1; i--)
    {
        DownHeap(arr, n, i);
    }

    for (int i = (n - 1); i > -1; i--) {
        swap(arr[0], arr[i]);

        DownHeap(arr, i, 0);
    }
}

int main()
{
    int num;
    cin >> num;
    vector<int> arr(num);
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    HeapSort(arr, num);

    cout << arr[0] << endl;
    for (int i = 1; i < num; i++)
    {
        if (arr[i - 1] != arr[i])
        {
            cout << arr[i] << "\n";//endl쓰면 시간이 는다
        }
    }

    return 0;
}