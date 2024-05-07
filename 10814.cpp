#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class people
{
public:
    string name;
    int age;
};

bool compare(people a, people b)
{
    return a.age < b.age;
}

int main()
{
    int num;
    cin >> num;
    vector<people> arr(num);
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i].age >> arr[i].name;
    }
    stable_sort(arr.begin(), arr.end(), compare);
    /*for (int j = 0; j < num; j++)
    {
        for (int k = 0; k < num - j - 1; k++)
        {
            if (arr[k].age > arr[k + 1].age)
            {
                people bucket = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = bucket;
            }
        }
    }*/
    for (int i = 0; i < num; i++)
    {
        cout << arr[i].age <<" " << arr[i].name<<"\n";
    }
}