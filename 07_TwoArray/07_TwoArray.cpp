#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//#include <ctime>
using namespace std;
#define START 0

int main()
{
    //const int test = 1;
    srand(time(NULL));
    /*cout << test << endl;
    cout << START << endl;*/

    //int a;
    //a = rand();//0....32767
    //cout << a << endl;
    //a = rand();//0....32767
    //cout << a << endl;
    //a = rand();//0....32767
    //cout << a << endl;
    ////32767 % 10 = 7
    ////555%10 = 5
    ////9876%10 = 6
    //for (int i = 0; i < 10; i++)
    //{
    //    a = rand() % 9;//0.....9
    //    cout << a << " ";
    //}
    /////0.....x
    ////a = rand()%x;
    ////11 - 16
    ////x....y   rand()%(y-x) + x
    //cout << endl;
    //for (int i = 0; i < 10; i++)
    //{
    //    // rand() % 5 - 0......4
    //    a = rand() % 6  + 11;//11.....16
    //    cout << a << " ";
    //}
    //cout << endl;
    //const int size = 10;
    //int arr[size];
    //for (int i = 0; i < size; i++)
    //{
    //    arr[i] = rand() % 100; 
    //    cout << arr[i] << " ";
    //}
    //cout << endl;


    //const int row = 3;
    //const int col = 4;
    //int matrix[row][col] {};
    //for (int i = 0; i < row; i++)
    //{
    //    for (int j = 0; j < col; j++)
    //    {
    //        cout << matrix[i][j] << " ";
    //    }
    //    cout << endl;
    //}
    //cout << endl;
    //for (int i = 0; i < row; i++)
    //{
    //    for (int j = 0; j < col; j++)
    //    {
    //        matrix[i][j] = rand()%20+10;//10....30
    //    }
    //}
    //for (int i = 0; i < row; i++)
    //{
    //    for (int j = 0; j < col; j++)
    //    {
    //        cout << matrix[i][j] << " ";
    //    }
    //    cout << endl;
    //}
    //cout << endl;


    ////int arr2[2][2] = { {1,2},{3,4} };
    //int arr2[2][2] = { 3,4,5,6 };
    //for (int i = 0; i < 2; i++)
    //{
    //    for (int j = 0; j < 2; j++)
    //    {
    //        cout << arr2[i][j] << " ";
    //    }
    //    cout << endl;
    //}
    //cout << endl;

    //int arr3[3][3] = { {7,8},{10,3,5} };
    //for (int i = 0; i < 3; i++)
    //{
    //    for (int j = 0; j < 3; j++)
    //    {
    //        cout << arr3[i][j] << " ";
    //    }
    //    cout << endl;
    //}
    //cout << endl;

    //Написати програму, яка у двовимірному масиві зна -
    //ходить максимальний елемент кожного рядка.

    const int row = 5;
    const int col = 7;
    int arr[row][col]{};
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = rand() % 50 + 10; 
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
  
    for (int i = 0; i < row; i++)
    {
        int max = arr[i][0];
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];
        }
        cout << "Max element in row  [ " << i << " ]  = " << max << endl;
    }

    
}

