#include <iostream>
using namespace std;

class Array
{
    int* arr;
    int size;
public:
    Array()
    {
        arr = nullptr;
        size = 0;
    }
    Array(int size)//10
    {
        this->size = size;
        arr = new int[size] {};
      /*  for (int i = 0; i < size; i++)
        {
            arr[i] = 0;
        }*/
    }
    Array(const initializer_list<int> list)
    {
        //int elem;
        this->size = list.size();
        arr = new int[size];
        int i = 0;
        for (int elem : list)
        {
            arr[i] = elem;
            i++;
        }
    }
    void Fill(const initializer_list<int> list)
    {
        if (arr != nullptr)delete[]arr;
        this->size = list.size();
        arr = new int[size];
        int i = 0;
        for (int elem : list)
        {
            arr[i] = elem;
            i++;
        }
    }
    void Print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int static_arr[5] = { 1,2,3,4,5 };
    int* dynamic_arr = new int[5] {11, 12, 13, 14, 15};
    Array arr(10);//parametrized constructor
    arr.Print();
    
    Array arr2({ 1,2,3,4,5 });
    arr2.Print();
    arr2.Fill({ 100,200,300,400,500,600 });
    arr2.Print();

    delete[]dynamic_arr;



}

