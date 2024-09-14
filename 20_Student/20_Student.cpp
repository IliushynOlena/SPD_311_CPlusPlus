#include <iostream>
using namespace std;

struct Date
{
//public:
    int day;
    int month;
    int year;
};

class Person//incapsulation
{
private:
    string name;//OLena
    string last_name;
    string surname;
    Date birthday;
    string phone ;
    string city;
    string country;
    string education_house;
    string education_city;
    string education_country;
    string group_number;
    int* marks;
    int markCount;
    int average;
    void AverageMark()
    {
        float sum = 0;
        for (int i = 0; i < markCount; i++)
        {
            sum += marks[i];
        }
        average = (float)sum / markCount;
    }
public:
    ////ctor + TAB
    Person()//default constructor
    {
        cout << "Constructor" << endl;
        name = "no name";
        last_name = "no last name";
        surname = "no surname";
        birthday = { 0,0,0 };
        phone = "no phone";
        city = "no city";
        country = "no country";
        education_house = "no education house";
        education_city = "no education city";
        education_country = "no education country";
        group_number = " no group";
        marks = nullptr;
        markCount = 0;
        average = 0;
    }
    //parametrized constructor
    Person(string name, string lastname, string surname)
    {
        cout << "Ctor invocation......." << endl;
        this->name = name;
        this->last_name = lastname;
        this->surname = surname;
        marks = nullptr;
        markCount = 0;
        average = 0;
    }
    Person(string name, string lastname, string surname, Date birthday)
    {
        cout << "Ctor invocation......." << endl;
        this->name = name;
        this->last_name = lastname;
        this->surname = surname;
        this->birthday = birthday;
        marks = nullptr;
        markCount = 0;
        average = 0;
    }
    Person(string name, string lastname, string surname, Date birthday, string phone)
    {
        cout << "Ctor invocation......." << endl;
        this->name = name;
        this->last_name = lastname;
        this->surname = surname;
        this->birthday = birthday;
        this->phone = phone;
        marks = nullptr;
        markCount = 0;
        average = 0;
    }
    void InitDefault()
    {
        name = "no name";
        last_name = "no last name";
        surname = "no surname";
        birthday = { 0,0,0 };
        phone = "no phone";
        city = "no city";
        country = "no country";
        education_house = "no education house";
        education_city = "no education city";
        education_country = "no education country";
        group_number = " no group";
    }
    void InputFromKeyboard()
    {
        cout << "Enter name : "; cin >> name;
        cout << "Enter last name : "; cin >> last_name;
        cout << "Enter surname : "; cin >> surname;
        cout << "Enter birthday day : "; cin >> birthday.day;
        cout << "Enter birthday month : "; cin >> birthday.month;
        cout << "Enter birthday year : "; cin >> birthday.year;
        cout << "Enter phone : "; cin >> phone;
        cout << "Enter city : "; cin >> city;
        cout << "Enter country : "; cin >> country;
        cout << "Enter education institution : "; cin >> education_house;
        cout << "Enter education city : "; cin >> education_city;
        cout << "Enter education country : "; cin >> education_country;
        cout << "Enter group_number : "; cin >> group_number;
    }
    void Show()
    {
        cout << "Name : " << name << endl;
        cout << "Last name : " << last_name << endl;
        cout << "Surname : " << surname << endl;
        cout << "Birthday day  : " << birthday.day << endl;
        cout << "Birthday month  : " << birthday.month << endl;
        cout << "Birthday year  : " << birthday.year << endl;
        cout << "Phone : " << phone << endl;
        cout << "City : " << city << endl;
        cout << "Country : " << country << endl;
        cout << "education institution : " << education_house << endl;
        cout << "education city : " << education_city << endl;
        cout << "education country : " << education_country << endl;
        cout << "Group : " << group_number << endl;
        cout << "Rating : " << average << endl;
        cout << "Marks : ";
        for (int i = 0; i < markCount; i++)
        {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
    void AddMark(int mark)
    {
        markCount++;
        int* temp = new int[markCount];
        for (int i = 0; i < markCount-1; i++)
        {
            temp[i] = marks[i];
        }
        temp[markCount - 1] = mark;
        if (marks != nullptr)
            delete[]marks;
        marks = temp;
        AverageMark();
    }
    //access : set get
    void setName(string name)
    {
        this->name = name;
        //name = n;
    }
    string getName()
    {
        return name;
    }
    void setLastName(string last_name)
    {
        this->last_name = last_name;
    }
    string getLastName()
    {
        return last_name;
    }
    void setSurname(string surname)
    {
        this->surname = surname;
    }
    string getSurname()
    {
        return surname;
    }
    void setBirthday(Date birthday)
    {
        this->birthday = birthday;
    }
    Date getBirthday()
    {
        return birthday;
    }
    void setPhone(string phone)
    {
        this->phone = phone;
    }
    string getPhone()
    {
        return phone;
    }
    void setCity(string city)
    {
        this->city = city;
    }
    string getCity()
    {
        return city;
    }
    void setCountry(string country)
    {
        this->country = country;
    }
    string getCountry()
    {
        return country;
    }
    void setGroupNumber(string group)
    {
        this->group_number = group;
    }
    string getGroupNUmber()
    {
        return group_number;
    }
    //~  + Tab
    ~Person()//destructor
    {
        cout << "Destructor  "<<name  << endl;
        if (marks != nullptr)
            delete[]marks;
    }
};

class Car//destructor constructor
{

};
int main()
{    
    int a = 5;
    int* pb = new int(5);
   
    
    
    Car car;//default constructor

    Person student;//default constructor
    //student.InitDefault();
    student.setName("Tania");
    student.Show();

    Person st1;//default constructor
    //st1.InitDefault();
    st1.setName("Vasia");
    st1.Show();


    Person newStudent("Olena", "Sergievna", "Iliushyn");
    newStudent.Show();

    Person st2("Mukola", "Petrovuch", "Petruk", { 11,5,2004 });
    st2.Show();

    Person st3("Olga", "Ivanivna", "Semenuc", { 5,5,2005 }, "+380956321478");
    st3.Show();
    st3.AddMark(12);
    st3.AddMark(7);
    st3.AddMark(4);
    st3.AddMark(8);
    st3.AddMark(11);
    st3.AddMark(11);
    st3.AddMark(11);
    st3.Show();
    //student.setLastName("Ivanivna");
    //student.setSurname("Oliunuk");
    //student.setBirthday({ 11,12,2000 });
    //student.setCity("Rivne");
    //student.setCountry("Ukaine");
    //student.setGroupNumber("SPD311");
    //student.setPhone("+380974562585");
    //cout << "Name : " << student.getName() << endl;
    ////student.InputFromKeyboard();
    //student.Show();
    //
    delete pb;
}

