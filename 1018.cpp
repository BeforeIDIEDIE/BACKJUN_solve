#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int row = 0;
    int col = 0;
    cin >> row >> col;
    // vector<vector<char>> vec(row, vector<char>(col));
    //ũ�Ⱑ row�� ���͸� ���� �ϴµ� row�� ������ �� ��Ұ� ũ�Ⱑ col�� ���Ͱ� �ȴ�.  

    /*//2���� ���͸� �����ϴ� 2��° ���~
         vector<vector<char>> vec;
        vec.resize(row);
        for (int i = 0; i < row; ++i) {
            vec[i].resize(col);
        }
    */
    char arr[50][50];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    int min = -1;

    for (int i = 0; i<=(row-8) ; i++)
    {
        for (int j = 0; j <= (col - 8); j++)
        {
            int even_black = 0;//¦�� �κ� ��
            int even_white = 0;//¦�� �κ� ��
            for (int k = i; k < i + 8; k++)
            {
                for (int l = j; l < j + 8; l++)
                {
                    if ((k + l) % 2 == 0)//¦����?
                    {
                        if (arr[k][l] == 'B')//¦�� ����?
                        {
                            even_black++;
                        }
                        else
                        {
                            even_white++;
                        }
                    }
                    else//Ȧ����?
                    {
                        if (arr[k][l] == 'B')//Ȧ�� ��?
                        {
                            even_white++;
                        }
                        else
                        {
                            even_black++;
                        }
                    }
                }
            }
            int prelimin = (even_black > even_white ? even_white : even_black);
            if (min == -1)
            {
                min = prelimin;
            }
            else if (min > prelimin)
            {
                min = prelimin;
            }
        }
    }
    cout << min;
}