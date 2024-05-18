#include <iostream>
using namespace std;

struct date 
{
	int day;
	int month;
	int year;
	char season[50];
	char month_name[50];
};

struct person 
{
	char name[30];
	char surname[30];
	char address[30];
	int salary;
	date birthday;
	date hiredate;
};

void Show(date dateToday)
{
	cout << dateToday.day << endl;
	cout << dateToday.month << endl;
	cout << dateToday.year << endl;
	cout << dateToday.season << endl;
	cout << dateToday.month << endl;
}

date CreateNewDate()
{
	date newDate;
	cout << "Enter day : ";  cin >> newDate.day;
	cout << "Enter month : ";  cin >> newDate.month;
	cout << "Enter year : ";  cin >> newDate.year;
	cout << "Enter season : ";  cin >> newDate.season;
	cout << "Enter month name : ";  cin >> newDate.month_name;
	return newDate;
}


int main()
{
	date newDate = CreateNewDate();
	Show(newDate);



	date dateToday = { 18,5,2024 };

	date* p = nullptr;
	Show(dateToday);
	cout << "-----------------------------" << endl;
	p = &dateToday;
	cout << p->day << endl;
	cout << p->month << endl;
	cout << p->year << endl;
	cout << "-----------------------------" << endl;
	date copy;
	copy = dateToday;
	Show(copy);
	cout << "-----------------------------" << endl;

	person Nick = { "Nick", "Tonson","Canada",5000, {11,11,2011,"autumn","November"}, 
		{ 15,5,2024,"spring", "May"} };

	cout << Nick.name << endl;
	cout << Nick.surname << endl;
	cout << Nick.address << endl;
	cout << Nick.salary << endl;
	cout << Nick.birthday.day << endl;
	cout << Nick.birthday.month << endl;
	cout << Nick.birthday.year << endl;
	cout << Nick.birthday.season << endl;
	cout << Nick.birthday.month_name << endl;
	cout << Nick.hiredate.day << endl;
	cout << Nick.hiredate.month << endl;
	cout << Nick.hiredate.year << endl;
	cout << Nick.hiredate.season << endl;
	cout << Nick.hiredate.month_name << endl;

	


	//int student[4] = { "Olena", "Iliushyn", 15, "PV152" };
	int a = 5;
	int arr[5] = { 1,2,5,4,7 };
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	date myBirthday = { 15,5,2024,"spring", "May" };
	cout << "------------- My birtday ---------------" << endl;
	cout << "Day : " << myBirthday.day << endl;
	cout << "Month : " << myBirthday.month << endl;
	cout << "Year : " << myBirthday.year << endl;
	cout << "Season : " << myBirthday.season << endl;
	cout << "Month name : " << myBirthday.month_name << endl;

	date friendBirhtday;
	cout << "Enter your birthday : ";
	cout << "Enter day : ";  cin >> friendBirhtday.day;
	cout << "Enter month : ";  cin >> friendBirhtday.month;
	cout << "Enter year : ";  cin >> friendBirhtday.year;
	cout << "Enter season : ";  cin >> friendBirhtday.season;
	cout << "Enter month name : ";  cin >> friendBirhtday.month_name;
	cout << "------------- Friend  birtday ---------------" << endl;
	cout << "Day : " << friendBirhtday.day << endl;
	cout << "Month : " << friendBirhtday.month << endl;
	cout << "Year : " << friendBirhtday.year << endl;
	cout << "Season : " << friendBirhtday.season << endl;
	cout << "Month name : " << friendBirhtday.month_name << endl;
   
}

