#include <iostream>
#include <conio.h>
using namespace std;

class Queue
{
    int* arr;
    int size;
    int top;
public:
    Queue() = default;
    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        top = 0;
    }
    ~Queue()
    {
        if (arr != nullptr)
            delete[]arr;
    }
    bool IsEmpty()const
    {
        return top == 0;
    }
    bool IsFull()const
    {
        return top == size;
    }
    void Enqueue(int element)
    {
        if (!IsFull())
        {
            arr[top++] = element;
        }
    }
    int Dequeue()
    {
        if (!IsEmpty())
        {
            int first = arr[0];
            for (int i = 1; i < top; i++)
            {
                arr[i - 1] = arr[i];
            }
            //simple queue
            //top--;
            arr[top - 1] = first;
            return first;
        }
    }
    int GetCount()const
    {
        return top;
    }
    void Clear()
    {
        top = 0;
    }
    void Show()const
    {
        for (int i = 0; i < top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
  
};
int main()
{
    Queue q(15);
    for (int i = 0; i < 10; i++)
    {
        q.Enqueue(rand() % 30);
    }
    q.Show();

    while (!q.IsEmpty())
    {
        cout << "Remove first element : " << q.Dequeue() << endl;
        _getch();
    }
    
}

