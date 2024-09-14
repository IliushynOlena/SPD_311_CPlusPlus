//#include <iostream>
//using namespace std;
//
//class Student
//{
//	string name;
//	string spetialization;
//	int* marks;
//	int count;
//public:
//	Student() :name("no name"), spetialization("no spetialization") ,marks(nullptr), count(0) {}
//	Student(string name, string spetialization) :name( name), spetialization(spetialization)
//	{
//		count = rand() % 12 + 2;
//		marks = new int[count];
//		for (int i = 0; i < count; i++)
//		{
//			//rand() % 4 = 0.......4
//			marks[i] = rand() % 5 + 8;//8 - 12
//		}	
//	}
//	virtual void Print()const
//	{
//		cout << "Name : " << name << endl;
//		cout << "Spetialization : " << spetialization << endl;
//		cout << "Marks : ";
//		for (int i = 0; i < count; i++)
//		{
//			cout << marks[i] << " ";
//		}
//		cout << endl;
//	}
//	virtual ~Student()
//	{
//		if (marks != nullptr)
//			delete[]marks;
//	}
//};
//
//class Aspirant : public Student
//{
//	string *subjects;
//	int countSub;
//public:
//	Aspirant() :subjects(nullptr),countSub(0), Student() {}
//	Aspirant(string name, string sp, initializer_list<string> list) : Student(name, sp)
//	{
//		countSub = list.size();
//		subjects = new string[countSub];
//		int i = 0;
//		for (string sub : list)
//		{
//			subjects[i] = sub;
//			i++;
//		}
//	}
//	
//	void Print()const
//	{
//		Student::Print();
//		cout << "Subject : ";
//		for (int i = 0; i < countSub; i++)
//		{
//			cout << subjects[i] << " , ";
//		}
//		cout << endl;
//	}
//	~Aspirant()
//	{
//		if (subjects != nullptr)
//			delete[]subjects;
//	}
//};
//
//int main()
//{
//	srand(time(0));
//	Student st("Vasia","SoftDevelopment");
//	st.Print();
//
//	Aspirant asp("Mukola", "Designer", { "UA/UX","Main page","Create new mystat"});
//	asp.Print();
//   
//	cout << endl;
//	Student* group[3]
//	{
//		new Student("Vasia","SoftDevelopment"),
//		new Aspirant("Mukola", "Designer", { "UA/UX","Main page","Create new mystat"}),
//		new Aspirant("Olga", "Water Engineer", { "Water recuperation"})
//	};
//
//	for (int i = 0; i < 3; i++)
//	{
//		group[i]->Print(); cout << endl;
//		delete group[i];
//	}
//	
//
//}
//
