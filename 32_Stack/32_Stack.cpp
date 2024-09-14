#include <iostream>
using namespace std;

//class Stack
//{
//    enum {EMPTY = -1, FULL = 9};
//    int arr[FULL + 1];//10
//    int top;//int size = 10;
//public:
//    Stack()
//    {
//        top = EMPTY;
//    }
//    
//    ~Stack() = default;
//    ////delete default in the methods
//    //Stack() = default;   
//    //~Stack() = default;// default = {}    
//    //Stack(const Stack& other) = delete;//copy constructor   
//    //Stack operator=(const Stack& other) = delete;//operator =
//    bool IsFull()
//    {
//        return top == FULL;
//    }
//    bool Push(int elem)//add to the end
//    {
//        if (!IsFull())
//        {
//            arr[++top] = elem;
//            return true;
//        }
//        return false;
//    }
//    bool IsEmpty()
//    {
//        return top == EMPTY;
//    }
//    int Pop()//delete to the end
//    {
//        if(!IsEmpty())
//            return arr[top--];
//        return 0;
//    }
//    int Peek()
//    {
//        if (!IsEmpty())
//            return arr[top];
//        return 0;
//    }
//    int GetCount()
//    {
//        return top + 1;
//    }
//    void Clear()
//    {
//        top = EMPTY;
//    }
//    void Print()
//    {
//        for (int i = 0; i <= top; i++)
//        {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//
//  
//};

class Stack
{
private :
    enum { EMPTY = -1 };
    int* arr;
    int size;
    int top;
public:
    Stack() = delete;
    Stack(int size):size(size)
    {
        arr = new int[size];//-10
        top = EMPTY;
    }
    bool IsFull()const
    {
        return top == size - 1;
    }
    bool Push(int element)
    {
        if (!IsFull())
        {
            arr[++top] = element;
            return true;
        }
        return false;
    }
    bool IsEmpty()const
    {
        return top == EMPTY;
    }
    int Pop()
    {
        if (!IsEmpty())
        {
            return arr[top--];
        }
        return 0;
    }
    int GetCount()const
    {
        return top + 1;
    }
    void Clear()
    {
        top = EMPTY;
    }
    void Print()const
    {
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    int Peek()const
    {
        if (!IsEmpty())
            return arr[top];
        return 0;
    }
    ~Stack()
    {
        if (arr != nullptr)
            delete[]arr;
    }
};
int main()
{
    srand(time(0));
    Stack st(15);//default constructor
    while (!st.IsFull())
    {
        st.Push(rand()%50);
    }
  /*  st.Push(15);
    st.Push(14);
    st.Push(13);
    st.Push(12);
    st.Push(11);
    st.Push(10);*/
    st.Print();
    cout << "Size : " << st.GetCount() << endl;
    cout << endl;
    cout << "Pop - delete last element : " << st.Pop() << endl;
    cout << "Size : " << st.GetCount() << endl;

    while (!st.IsEmpty())
    {
        cout << "Pop - delete last element : " << st.Pop() << endl;
    }
    









}

