#include <iostream>
using namespace std;

struct Point//public
{
    int x;
    int y;
};
class Person//private
{
private:
    string name;
    int age;
    int* marks;
    int countMark;
public:
    Person()//default constructor
    {
        name = "no name";
        age = 0;
        marks = nullptr;
        countMark = 0;
    }
    Person(string name, int age)//parametrized constructor
    {
        this->name = name;//Bob = Bob
        this->age = age;//   12 = 12
        marks = nullptr;//0x0000017f97742dc0 = 0x0000017f97742dc0
        countMark = 0;//4 = 4
    }
    Person(const Person &other)//constructor copy 
    {
        this->name = other.name;
        this->age = other.age;
        //this->marks = other.marks;//copy pointer
        this->marks = new int[other.countMark];
        for (int i = 0; i < other.countMark; i++)
        {
            this->marks[i] = other.marks[i];
        }
        this->countMark = other.countMark;

    }
    void AddMark(int mark)
    {
        countMark++;
        int* temp = new int[countMark];
        for (int i = 0; i < countMark - 1; i++)
        {
            temp[i] = marks[i];
        }
        temp[countMark - 1] = mark;
        if (marks != nullptr)
            delete[]marks;
        marks = temp;
    }
    void Print()
    {
        cout << "Name : " << name << " . Age : " << age << endl;
        cout << "Marks : ";
        for (int i = 0; i < countMark; i++)
        {
            cout << marks[i] << " ";
        }cout << endl;
    }
    ~Person()
    {
        if (marks != nullptr)
            delete[]marks;
        cout << "Destructor " << name << endl;
    }
};

void Add(int &a)
{
    a++;
    cout << a << endl;
}
int main()
{
    int a = 5;
    cout << a << endl;
    Add(a);
    cout << a << endl;

    Point p;
    Person st;//default constructor
    st.Print();

    Person student("Bob", 12);//parametrized constructor
    student.Print();
    student.AddMark(12);
    student.AddMark(7);
    student.AddMark(8);
    student.AddMark(9);
    student.Print();
    Person copy(student);
    copy.Print();


    /*
    int a = 0;
    cout << a << endl;
    a = 5;
    cout << a << endl;
    int b = 10;
    cout << b << endl;
    int c = 1.33;
    cout << c << endl;

    int numbers[2];
    cout << numbers[0] << endl;
    numbers[0] += 2;
    cout << numbers[0] << endl;

    int number = 0.33;//ініціалізація з копіюванням
    cout << number << endl;
    int value(2.5);//пряма ініціалізація
    cout << value << endl;
    int size { 33};//уніфікована ініціалізація
    //cout << size << endl;

    int answer{ 12 };
    const float goodTemp{ 36.6 };
    int grades[4]{ 11,12,10,9 };
    int matrix[2][2]{ {5,6},{7,8} };
    int* ptr = &answer;
    int* ptrData{ nullptr };
    Point point{ 5,10 };
    */
    







}
