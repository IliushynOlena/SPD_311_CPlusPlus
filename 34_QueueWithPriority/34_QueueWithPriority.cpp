#include <iostream>
using namespace std;


class Queue
{
    struct  Element
    {
        string value;
        int priority;
    };
    Element* arr;
    int size;
public:
    Queue():arr(nullptr), size(0){}
    ~Queue()
    {
        if (arr != nullptr)
            delete[]arr;
    }
    void Enqueue(string el, int priority)
    {
        int index = 0;
        while (index < size && arr[index].priority < priority) { index++; }
        size++;
        Element* temp = new Element[size];
        for (int i = 0; i < index; i++)
        {
            temp[i] = arr[i];
        }
        temp[index] = Element{el, priority};
        for (int i = index; i < size-1; i++)
        {
            temp[i + 1] = arr[i];
        }
        if (arr != nullptr)
            delete[]arr;
        arr = temp;
    }
    bool IsEmpty()
    {
        return size == 0;
    }
    Element Dequeue()
    {
        if (!IsEmpty())
        {
            Element first = arr[0];
            for (int i = 0; i < size - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            size--;
            return first;
        }
        return Element();
    }
    void Print()
    {
        cout << "-------------- Queue---------------" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i].value << "    " << arr[i].priority << endl;
        }
        cout << endl;
   }

};

int main()
{
    Queue q;
    q.Enqueue( "A",1 );
    q.Enqueue( "B",2 );
    q.Enqueue( "C",3 );
    q.Enqueue( "G",5 );
    q.Enqueue( "K",8 );
    q.Print();
    q.Enqueue( "D",4 );
    q.Print();


    q.Dequeue();
    q.Print();

    while (!q.IsEmpty())
    {
      cout<<  q.Dequeue().value<<endl;
    }
}
