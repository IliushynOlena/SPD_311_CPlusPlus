
#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node* next;
    Node(int value, Node* next) :value(value), next(next) {}
   
};

class List
{
private:
    Node* head;
public:
    List()
    {
        head = nullptr;
    }
    void AddToHead(int value)
    {
       Node* newNode = new Node(value,head);
       /* Node* newNode = new Node;
        newNode.value = value;
        newNode->next = head;*/
        head = newNode;
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
    void AddToTail(int value)
    {
        Node* newNode = new Node(value, nullptr);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node* current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = newNode;
        }     
    }
    int GetElement(int position)
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
    int operator[](int position)
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
        if (head == nullptr)return;
        if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
        }
        else
        {
            Node* current = head;
            while (current->next->next != nullptr)
            {
                current = current->next;
            }
            delete current->next;
            current->next = nullptr;
        }       
    }
};

int main()
{
    List l;
 /*   for (int i = 0; i < 10; i++)
    {
        l.AddToHead(i);
    }
    l.PrintList();*/
   /* l.AddToTail(100);
    l.AddToTail(200);
    l.AddToTail(300);*/
    l.AddToTail(400);
    l.PrintList();
    //cout << "3 element : " << l.GetElement(3) << endl;
   // cout << "4 element : " << l[4] << endl;
    //l.DeleteFromTail();
    l.DeleteFromTail();
    l.PrintList();
   
}

