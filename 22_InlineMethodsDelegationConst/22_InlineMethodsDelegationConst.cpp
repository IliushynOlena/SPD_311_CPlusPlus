#include <iostream>
using namespace std;

inline void Print()
{
	cout << "Hello World!\n";
}

class Human
{
	string name;
	int age;
	int weight;
	static int countUsers;
public:
	static int getCountUsers()
	{
		return countUsers;
	}
	Human() : name("no name"), age(0), weight{ 0 } { countUsers++; }
	 
	/*Human()
	{
		name = "no name";
		age = 0;
		weight = 0;
	}*/
	Human(string name): Human()
	{
		this->name = name;
		//age = 0;
		//weight = 0;
	
	}
	Human(string name, int age):Human(name)
	{
		//this->name = name;
		this->age = age;
		//weight = 0;

	}
	Human(string name, int age, int weight):Human(name, age)
	{
		//this->name = name;
		//this->age = age;
		this->weight = weight;
		
	}

	void Print() {
		cout << "Name : " << name << endl;
		cout << "Age : " << age << endl;
		cout << "Weight : " << weight << endl;
		cout << "______________________________"<< endl;
	}
	~Human()
	{
		countUsers--;
	}
};

int Human::countUsers = 0;
int main()
{
	int a = 5;
	static int b = 7;
	cout << "Count of human : " << Human::getCountUsers() << endl;
	
	Human h;
	h.Print();

	Human h2("Nick");
	h2.Print();

	Human h3("Olga", 14);
	h3.Print();
	if (true)
	{
		Human h4("Bob", 15, 120);
		h4.Print();
		cout << "Count of human : " << h4.getCountUsers() << endl;
	}
	//Human::countUsers = -10;
	cout << "Count of human : " << Human::getCountUsers() << endl;
	cout << "Count of human : " << h.getCountUsers() << endl;
	cout << "Count of human : " << h2.getCountUsers() << endl;
	cout << "Count of human : " << h3.getCountUsers() << endl;
	






	/*Print();
	cout << "Hello World!\n";*/
	
}

