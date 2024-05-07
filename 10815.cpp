#include<iostream>

#include<vector>

#include<algorithm>
using namespace std;



bool binary(vector<int>& vec, int n)
{
    int left = 0;
    int right = vec.size() - 1;
    while (left<=right)
    {
        int mid = left + ((right-left) / 2);
        if (vec[mid] == n)
        {
            return true;
        }
        else if (vec[mid] < n)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return false;
}
//이런 형태도 가능하다.
/*
int search(vector<int>& v, int start, int end, int target){
    if(start > end) return false;
    int mid = (start + end) / 2;

    if(target == v[mid]) return 1;
    else if(target < v[mid]) return search(v, start, mid - 1, target);
    else if(target > v[mid]) return search(v, mid + 1, end, target);
    else return 0;
}
*/

int main()
{
    // 입출력 스트림의 동기화를 끊음
    ios_base::sync_with_stdio(false);

    // cin과 cout의 동기화를 끊음
    cin.tie(NULL);
 
    vector<int> vec1;
    int input = 0;
    cin >> input;
    for (int i = 0; i < input; i++)
    {
        int input2 = 0;
        cin >> input2;
        vec1.push_back(input2);
    }
    sort(vec1.begin(),vec1.end());
    cin >> input;
    for (int i = 0; i < input; i++)
    {
        int input2 = 0;
        cin >> input2;
        bool flag = 0;
        flag  = binary(vec1, input2);
        if (flag == false)
        {
            cout << 0;
        }
        else
        {
            cout << 1;
        }
        cout << " ";
    }
}


//15552번 참조~~~~