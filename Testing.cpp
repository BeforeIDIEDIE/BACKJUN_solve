///************************************************************
// * 부호 없는 정수 자료형의 오버플로우와 언더플로우 확인하기 *
//*************************************************************/
//#include <iostream>
//#include <limits>
//using namespace std;
//
//int main()
//{
//    // 부호 없는 정수의 최대값과 최소값 검색
//    unsigned int num1 = numeric_limits<unsigned int>::max();
//    unsigned int num2 = numeric_limits<unsigned int>::min();
//    // 최대값과 최소값 출력
//    cout << "부호 없는 정수의 최대값: " << num1 << endl;
//    cout << "부호 없는 정수의 최소값: " << num2 << endl;
//    // 강제로 오버플로우와 언더플로우 발생 
//    num1 += 1;
//    num2 -= 1;
//    // 오버플로우와 언더플로우된 값 출력
//    cout << "오버플로우가 일어난 num1 + 1의 값: " << num1 << endl;
//    cout << "언더플로우가 일어난 num2 - 1의 값: " << num2 << endl;
//    return 0;
//}
//5주차 문서 4.3언급, 4.5언급

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    // Declaration
//    int num1, num2;
//    // Get input values
//    cout << "Enter the first number:";
//    cin >> num1;
//    cout << "Enter the second number:";
//    cin >> num2;
//    // Decision using nested if-else statement 
//    if (num1 >= num2)
//    {
//        if (num1 > num2)
//        {
//            cout << num1 << " > " << num2;
//        }
//        else
//        {
//            cout << num1 << " == " << num2;
//        }
//    }
//    else
//    {
//        cout << num1 << " < " << num2;
//    }
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    // Variable declaration
//    int temperature;
//    bool hot;
//    bool cold;
//    // Input the temperature 
//    cout << "Enter the temperature: ";
//    cin >> temperature;
//    // Set two conditions
//    hot = temperature >= 75;
//    cold = temperature <= 65;
//    // Make the decision
//    if (hot || cold)
//    {
//        cout << "The air condition system is turned on!" << endl;
//        if (hot)
//        {
//            cout << "The cooler is working!" << endl;
//        }
//        else
//        {
//            cout << "The heater is working!" << endl;
//        }
//    }
//    else
//    {
//        cout << "The air condition system is turned off!" << endl;
//    }
//    return 0;
//}