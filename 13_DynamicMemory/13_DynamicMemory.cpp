
#include <iostream>
#include <conio.h>
using namespace std;


void Test1()
{
    const int size = 10;
    int arr[size];//40b
}
void Test2()
{
    int size = 5;
    int* parr = new int[size];
    delete[]parr;
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
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int* CreateArray(int size)
{
    int* arr = new int[size];
    return arr;
}
int* AddNumber(int* arr, int *size, int number)
{
    (*size)++;//4
    int* temp = new int[*size];//4
    for (int i = 0; i < (*size)-1; i++)
    {
        temp[i] = arr[i];
    }
    temp[*size - 1] = number;
    delete[]arr;
    arr = temp;
    return arr;
}
int main()
{
    srand(time(0));
    int size;
    cout << "Enter size of arr : ";
    cin >> size;
    //int* arr = new int[size];
    int *arr = CreateArray(size);
    FillArr(arr, size);
    ShowArr(arr, size);

    int number;
    char choice = 'y';
    while (true)
    {
        cout << "Do you want to add number ? y/n ";
        choice = _getch();// cin >> choice;
        if (choice == 'n')break;

        cout << "Enter number : ";
        cin >> number;
        arr = AddNumber(arr, &size, number);
        system("cls");
        ShowArr(arr, size);

    }


    delete[] arr;
    /*
    int a = 3;
    int b = 5;

    int* pa = new int(10);
    int* pb = new int;
    int* pc = nullptr;

    pc = new int(12);
    *pb = 5;

    cout << *pa << endl;
    cout << *pb << endl;
    cout << *pc << endl;

    delete pc;
    pc = new int(47);
    cout << *pc << endl;

    cout << *pa + *pb + *pc << endl;
    //delete pa;
    delete pa;
    delete pb;
    delete pc;
    */
}
