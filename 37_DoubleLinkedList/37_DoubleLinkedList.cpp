
#include <iostream>
#include <list>

using namespace std;


template<typename T>
class List
{
    struct Node
    {
        Node* prev;
        T value;
        Node* next;
        Node(Node* prev, T value, Node* next) :prev(prev), value(value), next(next) {}

    };
private:
    Node* head;
    Node* tail;
public:
    List()
    {
        head = nullptr;
        tail = nullptr;
    }
    bool IsEmpy()
    {
        return head == nullptr;
    }
    void AddToHead(T value)
    {
        Node* newNode = new Node(nullptr,value, head);
        if (IsEmpy())
        {
            head = tail = newNode;
        }
        else
        {
            head->prev = newNode;
            head = newNode;
        }

      
    }
    void PrintList()
    {
        Node* current = head;
        while (current != nullptr)
        {
            cout << current->value << " ";
            current = current->next;
        }
        cout << endl;

    }
    ~List()
    {
        Node* temp = nullptr;
        while (head != nullptr)
        {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
    void AddToTail(T value)
    {
        Node* newNode = new Node(tail,value, nullptr);
        if (head == nullptr)
        {
            head = tail= newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    T GetElement(int position)
    {
        Node* current = head;
        int i = 1;
        while (current != nullptr)
        {
            if (position == i)return current->value;
            current = current->next;
            ++i;
        }
    }
    T operator[](int position)
    {
        Node* current = head;
        int i = 1;
        while (current != nullptr)
        {
            if (position == i)return current->value;
            current = current->next;
            ++i;
        }
    }
    void DeleteFromTail()
    {
        if (IsEmpy())return;
        if (head->next == nullptr)
        {
            delete head;
            head = tail = nullptr;
        }
        else
        {
          
            tail = tail->prev;
            delete tail->next;
            tail->next = nullptr;
        }
    }
};

struct Vagon
{
    int number;
    int seat;
    int passengers;
    Vagon()
    {
        number = 0;
        seat = 0;
        passengers = 0;
    }
    Vagon(int number, int seat, int passengers)
    {
        this->number = number;
        this->seat = seat;
        this->passengers = passengers;
    }
    void Show()
    {
        cout << "Vagon number: " << number << endl;
        cout << "Vagon seat: " << seat << endl;
        cout << "Vagon passengers: " << passengers << endl;
        cout << endl;
    }
};

class Train
{
    string model;
    //Vagon* vagons1;
    List<Vagon> vagons;
    void Print()
    {
        
        vagons.PrintList();
    }
    ~Train()
    {

    }
};
int main()
{
   
       List<int> l;//constructor
       for (int i = 0; i < 10; i++)
       {
           l.AddToHead(i);
       }
       l.PrintList();
        l.AddToTail(100);
        l.AddToTail(200);
        l.AddToTail(300);
        l.AddToTail(400);
        l.PrintList();
    //cout << "3 element : " << l.GetElement(3) << endl;
   // cout << "4 element : " << l[4] << endl;
    l.DeleteFromTail();
    l.DeleteFromTail();
    l.PrintList();

}

