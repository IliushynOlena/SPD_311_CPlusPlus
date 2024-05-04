
#include <iostream>
#include <iomanip>
using namespace std;

void FillArr(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 50;
        }
    }
}
void ShowArr(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(3) << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void Fill(int* arr, int col)
{
    for (int j = 0; j < col; j++)
    {
        arr[j] = rand() % 10;
    }
}


int** AddRow(int** arr, int& rows, int cols)
{
    int** temp = new int* [rows + 1];
    for (int i = 0; i < rows; i++)
    {
        temp[i] = arr[i];
    }
    temp[rows] = new int[cols];
    Fill(temp[rows], cols);
    delete[]arr;
    rows++;
    return temp;
}
void DeleteRow(int** &arr, int& rows, int cols)
{
    int** temp = new int* [rows - 1];
    for (int i = 0; i < rows-1; i++)
    {
        temp[i] = arr[i];
    }
    delete[] arr[rows - 1];
    delete[]arr;
    rows--;
    arr = temp;
}
void AddCol(int** &arr, int rows, int& cols)
{
    int** temp = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        temp[i] = new int[cols + 1];
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            temp[i][j] = arr[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        delete[]arr[i];
    }
    delete[]arr;
    arr = temp;
    for (int i = 0; i < rows; i++)
    {
        arr[i][cols] = 7;
    }
    cols++;
}

int main()
{
    srand(time(0));
    int rows = 4;
    int cols = 6;
    //cout << "Enter rows : "; cin >> rows;
    //cout << "Enter cols : "; cin >> cols;
    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
    FillArr(arr, rows, cols);
    ShowArr(arr, rows, cols);
    cout << "Add row in the end" << endl;
    arr = AddRow(arr, rows, cols);
    ShowArr(arr, rows, cols);
    cout << "Add row in the end" << endl;
    arr = AddRow(arr, rows, cols);
    ShowArr(arr, rows, cols);
    cout << "Delete row in the end" << endl;
    DeleteRow(arr, rows, cols);
    ShowArr(arr, rows, cols);
    cout << "Delete row in the end" << endl;
    DeleteRow(arr, rows, cols);
    ShowArr(arr, rows, cols);
    cout << "Add cols in the end" << endl;
    AddCol(arr, rows, cols);
    ShowArr(arr, rows, cols);
    AddCol(arr, rows, cols);
    ShowArr(arr, rows, cols);
    for (int i = 0; i < rows; i++)
    {
        delete[]arr[i];
    }


    delete[]arr;
}

