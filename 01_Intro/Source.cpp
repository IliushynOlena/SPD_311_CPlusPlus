#include <iostream>
using namespace std;



void main()
{
	//Ctrl+D - dublicate row
	  
	/*
	\n - Перейти на початок нового рядка
	\t - Перейти до наступної позиції табуляції
	\\ - Вивести зворотну \рисkу\
	\" - Вивести прямі подвійні лапки "
	\' -  Вивести одинарні лапки '
	\b - Видалення останнього виведеного символу
	*/

	
	/*
	cout << "Hello world\n";
	cout << "\\Hello\\ world\n";
	cout << "Hello \"world\"\n";
	cout << "\'Hello world \'\n";
	cout << "\tHello world \n";
	cout << "\t\tHello world \n";
	cout << "\t\t\tHello world \n";

	//1. Числові.
	//2. Символьні.
	//3. Логічні.
	int a = 10;
	cout << "a = ";
	cout << a;
	cout << "\n";
	a = 55;
	a = 150;
	a = 111;
	const float pi = 3.14;
	cout << "PI = " << pi << "\n";
	double c = 3.33333333333;
	//INT A = 333;
	int d;
	d = 100;
	int age = 15;
	int Age = 25;
	int AGE = 55;
	cout << "Age 1 = " << age << "\nAge 2 = " << Age << "\nAge 3 = " << AGE << endl << endl;
	cout << "Age 1 = " << age << endl<< "Age 2 = " << Age<< endl<< "Age 3 = " << AGE << endl;
	int a1 = 87;
	int a_1 = 77;
	//int 44a = 54;//error
	int ageofman = 60;
	//int age of man = 44;//error
	int age_of_man = 44;
	int ageOfMan = 35;
	//int ageOfMan = 12;
	//int int = 3;//error

	*/

	int DayIn_2000Year = 366;
	const int HourInDay = 24;

	int HourIn2000_Year;
	HourIn2000_Year = DayIn_2000Year * HourInDay;
	cout << " Hour In 2000 Year = " << HourIn2000_Year << endl;


	float discount = 0.05;
	float cost = 14.50;
	cout << "Enter cost : ";
	cin >> cost;
	int count = 5;
	cout << "Enter count : ";
	cin >> count;
	float price;
	price = cost * count - cost * count *discount;
	cout << "Please, pay : " << price << " grn " << endl;


	int number;
	cout << "Enter number : ";
	cin >> number;
	cout << "Number = " << number << endl;





	
}







