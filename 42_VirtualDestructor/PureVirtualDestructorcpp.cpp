#include <iostream>
using namespace std;

class Person//abstract class
{
	string name;
public:
	Person() :name("no name") {}
	Person(string name) :name(name)
	{
		
	}
	virtual void Print()const
	{
		cout << "Name : " << name << endl;
	}	
	//pure virtual destructor
	virtual ~Person() = 0 {};
	
};

class Aspirant : public Person
{
	string* subjects;
	int countSub;
public:
	Aspirant() :subjects(nullptr), countSub(0), Person() {}
	Aspirant(string name, initializer_list<string> list) : Person(name)
	{
		countSub = list.size();
		subjects = new string[countSub];
		int i = 0;
		for (string sub : list)
		{
			subjects[i] = sub;
			i++;
		}
	}

	void Print()const
	{
		Person::Print();
		cout << "Subject : ";
		for (int i = 0; i < countSub; i++)
		{
			cout << subjects[i] << " , ";
		}
		cout << endl;
	}
	~Aspirant()
	{
		if (subjects != nullptr)
			delete[]subjects;
	}
};

int main()
{
	srand(time(0));
	//Person st("Vasia");
	//st.Print();

	Aspirant asp("Mukola", { "UA/UX","Main page","Create new mystat" });
	asp.Print();

	cout << endl;
	Person* group[2]
	{
		//new Person("Vasia"),
		new Aspirant("Mukola", { "UA/UX","Main page","Create new mystat"}),
		new Aspirant("Olga",  { "Water recuperation"})
	};

	for (int i = 0; i < 2; i++)
	{
		group[i]->Print(); cout << endl;
		delete group[i];
	}


}

