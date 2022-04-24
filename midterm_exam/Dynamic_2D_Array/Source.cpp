using namespace std;
#include <iostream>
#define ROW 3
#define COL 5

int main()
{
    int** data;
    int i, j, k = 1;
    //請在此完成data的動態記憶體配置
    //start
    data = new int* [ROW];
    for (int i = 0; i < ROW; i++)
    {
        data[i] = new int[COL];
    }
    //end
    //設定data的內容{{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}}
    for (i = 0; i < ROW; i++)
        for (j = 0; j < COL; j++)
            data[i][j] = k++;

    //請在此將data的第一列與最後一列的內容交換
    //start
    int* temp = data[ROW - 1];
    data[ROW - 1] = data[0];
    data[0] = temp;
    //end
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            cout << data[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < ROW; i++)
        delete[] data[i];

    delete[] data;

    return 0;
}