#include <iostream>
#include <vector>

using namespace std;

int N, K;

vector<int> kits;

vector<bool> used;

int result = 0;

void backtrack(int day, int weight) 
{
    if (day == N) 
    {
        result++;
        return;
    }

    for (int i = 0; i < N; i++) 
    {
        if ((!used[i]) && (weight + kits[i] - K >= 500)) //상위 조건 : 처음 시도하는 경로 & 근손실이 일어나지 않을 경우 
        {
            used[i] = true;
            backtrack(day + 1, weight + kits[i] - K);
            used[i] = false; // 다른 조합을 위해 사용 여부를 다시 false로 설정
        }
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;
    kits.resize(N);
    used.assign(N, false);

    for (int i = 0; i < N; i++) 
    {
        cin >> kits[i];
    }

    backtrack(0, 500); 

    cout << result << "\n";

    return 0;
}