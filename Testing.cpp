///************************************************************
// * ��ȣ ���� ���� �ڷ����� �����÷ο�� ����÷ο� Ȯ���ϱ� *
//*************************************************************/
//#include <iostream>
//#include <limits>
//using namespace std;
//
//int main()
//{
//    // ��ȣ ���� ������ �ִ밪�� �ּҰ� �˻�
//    unsigned int num1 = numeric_limits<unsigned int>::max();
//    unsigned int num2 = numeric_limits<unsigned int>::min();
//    // �ִ밪�� �ּҰ� ���
//    cout << "��ȣ ���� ������ �ִ밪: " << num1 << endl;
//    cout << "��ȣ ���� ������ �ּҰ�: " << num2 << endl;
//    // ������ �����÷ο�� ����÷ο� �߻� 
//    num1 += 1;
//    num2 -= 1;
//    // �����÷ο�� ����÷ο�� �� ���
//    cout << "�����÷ο찡 �Ͼ num1 + 1�� ��: " << num1 << endl;
//    cout << "����÷ο찡 �Ͼ num2 - 1�� ��: " << num2 << endl;
//    return 0;
//}
//5���� ���� 4.3���, 4.5���

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