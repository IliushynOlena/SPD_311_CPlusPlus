#include <iostream>
using namespace std;
#define NULL 0

void ChangeVariable(int& a)
{
    a++;
}
int& FindMax(int& a, int& b)
{
    if (a > b) return a;//5
    else return b;//8

   /* int c = b;
    return c;*/
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
int& FindMax(int* arr, int size)
{
    //8 9 7 4 5 12 1 6 
    int max = arr[0];
    int maxIndex = 0;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > max)
        {
            max = *(arr + i);
            maxIndex = i;

        }
    }
    return arr[maxIndex];//12
}

int main()
{
    srand(time(0));
    const int size = 10;
    int arr[size];
    FillArr(arr, size);
    ShowArr(arr, size);
    cout << "Max : " << FindMax(arr, size) << endl;;
    FindMax(arr, size) = 0;
    ShowArr(arr, size);
    int a = 5;
    int b = 3;
    cout << "a = " << a << endl;
    ChangeVariable(a);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "Max = "<<  FindMax(a, b) << endl;
    FindMax(a, b) = 100;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    //const int null = 0;
    //int a = 10;

    //int* pa = &a;
    //cout << a << endl;
    //cout << pa << endl;
    //cout << *pa << endl;

    //int b = 5;
    ////int* pb;//garbage
    ////int* pb = 0;
    ////if(pb != 0){//some code
    ////}
    ////int* pb = NULL;
    ////if (pb != NULL) {//some code
    ////}
    //int* pb = nullptr;
    //if (pb != nullptr) {//some code
    //}
    //pb = &b;
    ////pb = &a;




    ////link
    //int& lb = b;
    //cout << "b = " << b << endl;
    //cout << "lb = " << lb << endl;
    //int& la = a;
    ////int& la;
    ////la = a;
    //cout << a + b << endl;
    //cout << *pa + *pb << endl;
    //cout << la + lb << endl;
    //cout << a << endl;
    //cout << la << endl;
    //la++;
    //cout << a << endl;
    //cout << la << endl;

    








}

