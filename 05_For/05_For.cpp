#include <iostream>
using namespace std;

int main()
{
	/*
	int i = 0;
	while (i < 10)
	{
		cout << "Hello world" << endl;
		i++;
	}
	cout << endl;

	for (int i = 1; i <= 10; i++)
	{
		cout << "The student squatted "<< i  << endl;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << i << " ";
	}
	cout << endl;

	int x;
	for ( x = 0; x < 10; x+=2)
	{
		cout << x << " ";
	}
	cout << endl;

	float y = 0;
	for (   ; y < 1; y+=0.2)
	{
		cout << y << " ";
	}
	cout << endl;

	for (int i = 1; i <= 5;)
	{
		cout << i << " "; i++;
	}
	cout << endl;

	for (int i = 0; ; i++)
	{
		cout << i << " ";
		if (i == 15)break;
	}
	cout << endl;

	int magicNum = 2;
	cout << "=================================================" << endl;
	cout << " \tMy magic number between 1 and 10 "<< endl;
	cout << "=================================================" << endl;
	int user = 0;
	for (int i = 1; i <= 5; i++)
	{
		cout << "Enter number : ";
		cin >> user;

		if (user == magicNum)
		{
			cout << "Congratulation !!!" << endl;
			break;
		}
		else
		{
			cout << "That's not my number !"<<endl;
		}

		if (i == 5)
		{
			cout << "Try again later ! " << endl;
		}
	}


	for (int i = 0; i < 26; i++)
	{
		/*if (i % 2 != 0)
			cout << i << " ";*/
		/*if (i % 2 == 0)
			continue;

		cout << i << " ";
	}*/

	//Годинник б, є щогодини стільки разів, скільки зараз
	//	годин.Написати програму, яка підрахує, скільки разів
	//	проб, є годинник за 12 годин.

	//int summa = 0;
	//for (int i = 0; i <= 12; i++)
	//{
	//	summa += i;
	//}
	//cout << "Hour have puched " << summa << endl;

	//int num, sum = 0;
	//for (  ; ; )//while (true)
	//{
	//	cout << "Enter number : ";
	//	cin >> num;
	//	if (num == 0)break;


	//	sum += num;
	//}

	//cout << "Summa all numbers = " << sum << endl;

/*
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "|###|";
		}
		cout << endl;
	}

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}


	for (int i = 0; i < 20; i++)
	{
		for (int i = 0; i < 20; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;

	int row;
	int star_count;
	int lenght = 20;
	row = 1;
	while (row <= lenght)
	{
		star_count = 1;
		while (star_count <= lenght)
		{
			cout << " *"; 
			star_count++;
		}
		cout << endl;
		row++;
	}
*/
//for (int i = 0; i < 5; i++)
//{
//	for (int j = 0; j < 7; j++)
//	{
//		cout << "# " ;
//	}
//	cout << endl;
//}
//cout << endl;
//for (int i = 0; i < 5; i++)
//{
//	for (int j = 0; j < 5; j++)
//	{
//		if (i == j)
//			cout << "+ ";
//		else
//			cout << "= ";
//	}
//	cout << endl;
//}
//cout << endl;
//
//for (int i = 0; i < 5; i++)
//{
//	for (int j = 0; j < 5; j++)
//	{
//		if (i + j == 5 - 1 )
//			cout << "+ ";
//		else
//			cout << "= ";
//	}
//	cout << endl;
//}
//cout << endl;
//	

for (int i = 0; i < 10; i++)
{
	for (int j = 0; j < 10; j++)
	{
		if (i >= j && i+j >= 10-1)
		{
			cout << "|===|";
		}
		else
		{
			cout << "     ";
		}
	}
	cout << endl;
}



for (int i = 0; i < 7; i++)
{
	for (int j = 0; j < 10; j++)
	{
		cout << "|###|";
	}
	cout << endl;
}
	

}

