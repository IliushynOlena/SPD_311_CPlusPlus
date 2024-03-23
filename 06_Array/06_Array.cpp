#include <iostream>
using namespace std;

int main()
{
    //int size = 6;

    int train[3];
    train[0] = 3;
    train[1] = 1;
    train[2] = 4;
    cout << train[0] << endl;
    cout << train[1] << endl;
    cout << train[2] << endl;
    cout << endl;


    int arr[5] = {};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    } 
    cout << endl;

    const int size = 10;
    int arr2[size] = {1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i < size; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    int arr3[5] = { 1,2,3 };
    for (int i = 0; i < 5; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;

    int arr4[] = { 10,20,30,40,50,55,58,47,69 };
    for (int i = 0; i < 9; i++)
    {
        cout << arr4[i] << " ";
    }
    cout << endl;
    const int Size = 3;
    int arr5[Size];
    for (int i = 0; i < Size; i++)
    {
        cout << "Enter [ "<< i + 1 <<" ]" << "number : "; 
        cin >> arr[i];
    }
    for (int i = 0; i < Size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    //Написати програму, яка знаходить суму всіх від'ємних значень у масиві.

    //Написати програму, яка знаходить мінімальне й максимальне значення в масиві 
    // і виводить їх на екран.

    const int SIZE = 10;
    int arr6[SIZE] = { 23,-1,8,-7,15,-4,9,-6,33,7 };
    int sum = 0;
    int max = arr6[0];
    int min =arr6[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (arr6[i] < 0)
            sum += arr6[i];

        if (arr6[i] > max)
            max = arr6[i];

        if (arr6[i] < min)
            min = arr6[i];
    }
    cout << "Summa elements of arr = " << sum << endl;
    cout << "Max element of arr = " << max << endl;
    cout << "Min element of arr = " << min << endl;




}
