#include<iostream>
#include<vector>
#include<map>
#include<deque>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    deque<int> Deque;

    int n = 0, end = 0;
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        int command = 0;
        cin >> command;
        switch (command) 
        {
        case 1: 
        {
            int input = 0;
            cin >> input;
            Deque.push_front(input);
            end++;
            break;
        }
        case 2: 
        {
            int input = 0;
            cin >> input;
            Deque.push_back(input);
            end++;
            break;
        }
        case 3: 
        {
            if (end == 0) 
            {
                cout << -1 << "\n";
            }
            else 
            {
                cout << Deque.front() << "\n";
                Deque.pop_front();
                end--;
            }
            break;
        }
        case 4: 
        {
            if (end == 0) 
            {
                cout << -1 << "\n";
            }
            else 
            {
                cout << Deque.back() << "\n";
                Deque.pop_back();
                end--;
            }
            break;
        }
        case 5: 
        {
            cout << end << "\n";
            break;
        }
        case 6: 
        {
            cout << (end == 0 ? 1 : 0) << "\n";
            break;
        }
        case 7: 
        {
            cout << (end == 0 ? -1 : Deque.front()) << "\n";
            break;
        }
        case 8: 
        {
            cout << (end == 0 ? -1 : Deque.back()) << "\n";
            break;
        }
        }
    }
    return 0;
}





//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    vector<int> Deque;
//
//    int n = 0, end = 0;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        int command = 0;
//        cin >> command;
//        switch (command)
//        {
//        case 1:
//        {
//            int input = 0;
//            cin >> input;
//            Deque.insert(Deque.begin(), input);
//            /*
//            Deque.resize(end+1);
//            for (int i = end; i > 0; i--)
//            {
//                Deque[i] = Deque[i - 1];
//            }
//            Deque[0] = input;
//            */
//            end++;
//            break;
//        }
//        case 2:
//        {
//            int input = 0;
//            cin >> input;
//            Deque.push_back(input);
//            end++;
//            break;
//        }
//        case 3:
//        {
//            if (end == 0)
//            {
//                cout << -1 << "\n";
//            }
//            else
//            {
//                cout << Deque[0] << "\n";
//                Deque.erase(Deque.begin());
//                /*
//                for (int i = 0; i < end - 1; i++)
//                {
//                    Deque[i] = Deque[i + 1];
//                }
//                Deque.pop_back();
//                */
//                end--;
//            }
//            break;
//        }
//        case 4:
//        {
//            if (end == 0)
//            {
//                cout << -1 << "\n";
//            }
//            else
//            {
//                cout << Deque[Deque.size() - 1] << "\n";
//                Deque.pop_back();
//                end--;
//            }
//            break;
//        }
//        case 5:
//        {
//            cout << end << "\n";
//            break;
//        }
//        case 6:
//        {
//            cout << (end == 0 ? 1 : 0) << "\n";
//            break;
//        }
//        case 7:
//        {
//            cout << (end == 0 ? -1 : Deque[0]) << "\n";
//            break;
//        case 8:
//        {
//            cout << (end == 0 ? -1 : Deque[Deque.size() - 1]) << "\n";
//            break;
//        }
//        }
//        }
//    }
//    return 0;
//}