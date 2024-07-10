

//어두운 굴다리, 풀이----https://blog.naver.com/argoithm/223508090357

#include <iostream>
#include <vector>
#include<cmath>
using namespace std;

long long BinarySearch(vector<long long>& vec, long long N, long long left, long long right)
{
    if (left > right)
    {
        return left;
        //return right;//->에러난 부분
    }

    long long mid = (left + right) / 2;
    long long cnt = 0;
    int error = 0,last_search = 0;
    
    for (long long search : vec)
    {
        if (last_search < search - mid)
        {
            error = 1;
            break;
        }
        last_search = mid + search;
    }

    if (last_search < N)
    {
        error = 1;
    }
    

    if (error)
    {
        return BinarySearch(vec, N, mid + 1, right);

    }
    else
    {
        return BinarySearch(vec, N, left, mid - 1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long  m = 0, n = 0;
    cin >> n >> m;

    vector<long long> vec(m);
    for (long long i = 0; i < m; i++)
    {
        cin >> vec[i];
    }

    cout << BinarySearch(vec, n, 1, n);

    return 0;
}

