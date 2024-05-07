#include<iostream>
#include<vector>
using namespace std;

class NODE
{
public:
    NODE* next = NULL;
    NODE* prev = NULL;
    int ind;
    int value;
};

int n = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    NODE first;
    NODE* P = &first;
    for (int i = 0; i < n; i++)
    {
        P->next = new NODE();
        NODE* Q = P->next;
        Q->prev = P;
        int input;
        cin >> input;
        Q->value = input; // Q를 사용하여 값 설정
        Q->ind = i + 1;
        P = Q;
    }
    P->next = first.next;
    (first.next)->prev = P;
    P = P->next;//P의 인덱스를 1로 맞추기!
    
    
    while (P->next !=P)
    {
        cout << P->ind << " ";
        P->next->prev = P->prev;
        P->prev->next = P->next;
        if (P->value > 0) 
        {
            int value = P->value;
            for (int i = 0; i < value; i++)
            {
                P = P->next;
            }
        }
        else 
        {
            int value = -P->value;
            for (int i = 0; i < value; i++)
            {
                P = P->prev;
            }
        }
    }
    cout << P->ind;
    
    return 0;
}
