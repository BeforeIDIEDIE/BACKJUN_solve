#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int row = 0;
    int col = 0;
    cin >> row >> col;
    // vector<vector<char>> vec(row, vector<char>(col));
    //크기가 row인 벡터를 생성 하는데 row인 벡터의 각 요소가 크기가 col인 벡터가 된다.  

    /*//2차원 벡터를 형성하는 2번째 방법~
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
            int even_black = 0;//짝수 부분 검
            int even_white = 0;//짝수 부분 흰
            for (int k = i; k < i + 8; k++)
            {
                for (int l = j; l < j + 8; l++)
                {
                    if ((k + l) % 2 == 0)//짝수니?
                    {
                        if (arr[k][l] == 'B')//짝수 검정?
                        {
                            even_black++;
                        }
                        else
                        {
                            even_white++;
                        }
                    }
                    else//홀수니?
                    {
                        if (arr[k][l] == 'B')//홀수 흰?
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