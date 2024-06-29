#include <iostream>
using namespace std;

class Date
{

	int day;
	int month;
	int year;
	const int baseYear;
public:
	Date(int day, int month, int year, int base): day(day), month(month), year(year),baseYear(base)
	{
		/*this->day = day;
		this->month = month;
		this->year = year;
		this->baseYear = base;*/

	}
	//Date()
	//{

	//}
	//Date(const Date & other)//copy constryctor
	//{

	//}
	/*void setDate(Date * const this , int day)
	{
		this->day = day;
	}*/
	int getDate()
	{
		return day;
	}
	int getDate()const
	{
		return day;
	}
	void Print()const
	{
		
		cout << "Date : " << day << "." << month << "." << year << ". Base year : " << baseYear << endl;
	}
	/*~Date()
	{

	}*/
};

class Account
{
private:
	double sum;
	const double rate;
public:
	Account(double Rate, double Sum): rate(Rate)
	{		
		//rate = Rate; //error
		sum = Sum;
	}
	double getRate() const
	{
		return rate;
	}
	double getIncome()
	{
		return sum * rate / 100;
	}
	double getIncome() const
	{
		return sum * rate / 100;
	}
	double getSum()
	{
		return sum;
	}
	double getSum()const
	{
		return sum;
	}
	double setSum()
	{ 
		sum += getIncome(); 
		return sum;
	}
};

void doSomething(long number)//int = long
{

}
float doSomething()
{
	return 10.0;//double  ==> float 
}
class Array
{
	int* arr;
	int size;
public:
	explicit Array(int size)
	{
		this->size = size;
		arr = new int[this->size];
	}
	~Array()
	{
		delete[]arr;
	}
	int getSize()const
	{
		return size;
	}
	int getValue(int index)const
	{
		return arr[index];
	}
	void setValue(int value, int index)
	{
		arr[index] = value;
	}
	void Display(int index)const
	{
		cout << arr[index] << " ";
	}
};

void DisplayArray(const Array& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		arr.Display(i);
	}
	cout << endl;
}
int main()
{
	cout << "Dynamic integer array" << endl;
	int size = 10;
	Array arr(size);//constructor
	for (int i = 0; i < size; i++)
	{
		arr.setValue( size - i, i);
	}
	DisplayArray(arr);
	cout << "!!!" << endl;
	//DisplayArray(5);//int ==> Array

	Array arr3(15);//constructor
	//Array arr4 = 7;//int ==> Array
	

	////Explicit - Implicit
	//int a = 3.33;//double ==> int Implicit
	//cout << a << endl;

	//double b = 5;//int ==> double 5.000000000000000 Implicit
	//cout << b << endl;

	//doSomething(5);
	////Explicit
	//double d = (double) 5.0 / 4;
	//cout << d << endl;
	//int c = (int) 5.258;

	/*
	
    //Const
	Account account1(5, 2000);
	const Account account2(8, 5000);
	cout<< "getRate account1 : " << account1.getRate()<<endl;
	cout<< "getRate account2 : " << account2.getRate() << endl;

	cout<< "getSum  account1: " << account1.getSum() << endl;
	cout<< "getSum account2: " << account2.getSum() << endl;

	cout<< "getIncome account1: " << account1.getIncome() << endl;
	cout<< "getIncome account2: " << account2.getIncome() << endl;

	cout<< "setSum account1 : " << account1.setSum() << endl;*/
	//cout<< "setSum account2: " << account2.setSum() << endl;//error

	//const int size = 5;
	//
	//const string str = "first day";
	//const string str2 { "first day" };
	//const char* filepath{ "text.txt" };
	//const int days[]{ 31,31,28 };
	//const Date eventDate{ 24,8,2024 };
	////eventDate.setDate(28);//error
	//cout << "Date : " << eventDate.getDate() << endl;
	//
	//Date vacation{ 22,07,2024 };
	////vacation.setDate(6);
	//vacation.day = 21;
	//cout<< vacation.getDate() << endl;
	/*cout << "Enter base year : ";
	int year;
	cin >> year;
	Date test(15, 12, 2022, year);
	test.Print();
	*/
}

