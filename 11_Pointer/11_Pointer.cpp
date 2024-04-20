#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

void SetColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void SetPos(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}



void ChangeVar(int a)
{
    a++;
}
void ChangeVar(int *a)//address
{
    (*a)++;
}
int FindMax(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else
        return c;
}
int* FindMax(int *a, int *b, int *c)
{
    if (*a > *b && *a > *c)
        return a;
    else if (*b > *a && *b > *c)
        return b;
    else
        return c;
}
void FillArr(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = rand() % 50;
    }
}
void ShowArr(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
       cout<<  *(arr + i) <<" ";
    }
    cout << endl;
}
int* FindMax(int* arr, int size)
{
    int* max = arr;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > *max)
        {
            max = arr + i;
        }
    }
    return max;
}

void InitMatrix(int arr[][7], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = rand() % 50;
        }
    }
}
void ShowMatrix(int arr[][7], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << setw(4)<< arr[i][j] << " ";
        }
        cout << endl;
    }
}void AnyLine(int symbol, int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << (char) symbol;
    }
}
void MySetw(int count)
{
    cout << setw(count);
}



int main()
{
    AnyLine(201, 1);
    AnyLine(205, 3);
    AnyLine(203, 1);
    AnyLine(205, 5);
    AnyLine(203, 1);
    srand(time(0));
    for (int i = 0; i < 255; i++)
    {
        cout << "code = " << i << " char [ " << (char)i << " ] " << endl;
    }
    /*for (int i = 0; i < 50; i++)
    {
        SetColor(rand() % 15 + 1);
        SetPos(rand() % 100, rand() % 30);
        Sleep(500);
        cout << "*" ;
    }
    system("pause");*/
    /*
    for (int i = 0; i < 100; i++)
    {
        SetColor(i);
        cout << "Hello world " << endl;
    }
    SetColor(7);
    double x = -5, y = 2.7, z = 3.14;
    cout << setw(5)<< x << endl;
    cout << setw(5) << y << endl;
    cout << setw(5) << z << endl;
    //const int size = 10;
    //int arr[size];
    //FillArr(arr, size);
    //ShowArr(arr, size);
    //int * max = FindMax(arr, size);
    //*max = (*max) * 2;
    //ShowArr(arr, size);
    const int row = 5, col = 7;
    int arr[row][col];
    InitMatrix(arr, row, col);
    SetColor(4);
    ShowMatrix(arr, row, col);
    SetColor(7);
    */

    /*
    int a = 0, b = 0, c = 0;
    cout << "Enter 3 variable : ";
    cin >> a >> b >> c;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    int max = FindMax(a, b, c);
    cout << "Max = " << max << endl;
    max++;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "Max = " << max << endl;

   int *fMax =  FindMax(&a, &b, &c);
   cout << "fMax = " << fMax << endl;
   cout << "*fMax = " << *fMax << endl;
   (*fMax) += 10;
   cout << "a = " << a << endl;
   cout << "b = " << b << endl;
   cout << "c = " << c << endl;
   cout << "*fMax = " << *fMax << endl;
   */

   /* int a = 5;
    cout << "a = " << a << endl;
    ChangeVar(a);
    cout << "a = " << a << endl;
    ChangeVar(&a);
    cout << "a = " << a << endl;*/

    /*
    const int size = 10;
    int arr[size];//40b
    int* parr = &arr[0];
    for (int i = 0; i < size; i++)
    {
        //arr[i] = rand() % 50;
        *(parr + i) = rand() % 50;        
    }
    int a = 7;
    cout << a + 1 << endl;
    cout << a << endl;
    a++;
    cout << a << endl;
    cout << arr[0] << endl;
    cout << parr << endl;//address
    cout << *parr << endl;
    cout << arr << endl;
    cout << *arr << endl;
    for (int i = 0; i < size; i++)
    {
        cout << *(parr + i) << " ";
    }cout << endl;

    for (int i = 0; i < size; i++)
    {
        *parr = rand() % 100; 
        parr++;
    }
    parr = arr;
    for (int i = 0; i < size; i++)
    {
        cout << *parr << " ";
        parr++;
    }
    cout << endl;
    int* newArr = arr;
    *newArr = 0;
    newArr += 3;
    *newArr = 0;

    parr = arr;
    for (int i = 0; i < size; i++)
    {
        cout << *parr << " ";
        parr++;
    }
    cout << endl;
    parr--;
    for (int i = 0; i < size; i++)
    {
        cout << *parr << " ";
        parr--;
    }
    cout << endl;

    int* find = arr;
    int num = 91;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) == num) {
            find = arr + i;
        }
    }
    cout << "Find element in address " << find << endl;
    cout << "Element in address " << *find << endl;
    *find = 1000;
    parr = arr;
    for (int i = 0; i < size; i++)
    {
        cout << *parr << " ";
        parr++;
    }
    cout << endl;
    */
    /*
    int a = 5;
    cout << "a = " << a << endl;

    int* pa = &a;
    cout << " pa : " << pa << endl;
    cout << "*pa = " << *pa << endl;   

    int b = 10;
    int* pb = &b;
    cout << "b = " << b << endl;
    cout << "pb = " << pb << endl;
    cout << "*pb = " << *pb << endl;

    cout << "a + b = " << a + b << endl;
    cout << "*pa + *pb = " << *pa + *pb << endl;

    pa = &b;
    cout << "b = " << b << endl;
    cout << "*pb = " << *pb << endl;
    cout << "*pa = " << *pa << endl;

    *pa += 2;

    cout << "b = " << b << endl;
    cout << "*pb = " << *pb << endl;
    cout << "*pa = " << *pa << endl;
    */



}

