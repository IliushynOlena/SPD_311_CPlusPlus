#include <iostream>
using namespace std;

class Student
{
    //private public protected
private:
    string name;
    int age;
    int marks[3];
public:
    double getAverage()
    {
        double sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += marks[i];
        }
        return sum / 3;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setMark(int mark, int index)
    {
        marks[index] = mark;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    int getMark(int index)
    {
        return marks[index];
    }

};



int main()
{
    Student st;
    st.setName("Tom");
    st.setAge( 12);
    st.setMark(12, 0);
    st.setMark(11, 1);
    st.setMark(10, 2);

    cout << "Name : " << st.getName() << " . Age : " << st.getAge() << " . Marks : " << st.getMark(0) << endl;
    cout << "Average mark : " << st.getAverage() << endl;
    double average = st.getAverage();
    cout << "Average mark : " << average << endl;

    /*
    Student Nick;
    Nick.name = "Nick";
    Nick.age = 55;
    Nick.marks[0] = 5;
    cout << "Name : " << Nick.name << " . Age : " << Nick.age << " . Marks : " << Nick.marks[0] << endl;
    */
}
