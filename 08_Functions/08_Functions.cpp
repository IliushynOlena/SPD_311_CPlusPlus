#include <iostream>
using namespace std;


void Hello()
{
	cout << "Hello" << endl;
}
//void Test()
//{
//	cout << "Test" << endl;
//}
void Star(int count = 10)
{
	for (int i = 0; i < count; i++)
	{
		cout << "* ";
	}
	cout << endl;
}
void AnyLine(char symbol, int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << symbol<< " ";
	}
	cout << endl;
}
int Pow(int digit, int pow)//2...3
{
	int res = 1;
	for (int i = 0; i < pow; i++)
	{
		res *= digit;
	}
	cout << "Pow  = " << res << endl;
	return res;
}
void Second()
{
	cout << "Secondt function  " << endl;
}
void First()
{
	cout << "First function start " << endl;
	Second();
	cout << "First function finish " << endl;
}
void Change(int a, int b)
{
	cout << "a = " << a << " b = " << b << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << " b = " << b << endl;
}
void InitArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 50;
	}
}
void ShowArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int SummaArr(int arr[], int size)
{
	int summa = 0;
	for (int i = 0; i < size; i++)
	{
		summa += arr[i];
	}
	return summa;
}

void InitMatrix(int arr[][7], int row, int col);
void ShowMatrix(int arr[][7], int row, int col);
int SummaMatrix(int arr[][7], int row, int col);
//global variable
int B;//0
int A = 10;
void setA()
{
	A = 99;
}
void Show()
{
	cout << " A = " << A << endl;
}
void setSecondA()
{
	int A = 77;
	cout << " A = " << A << endl;
	cout << "Global variable : " << ::A << endl;
	::A = 333;
}

//void Foo(int a = 1, int b = 3, int c = 7, int d = 12)
//void Foo(int a , int b, int c = 7, int d = 12)
void Foo(int b, int c, int a = 1 , int d = 12)//Error
{
	cout << a << " " << b << " "<< c<< " "<< d <<  endl;
}
//void Foo(int b)
//{
//	cout << b << endl;
//}

 void SomeFunction()
{
	static int a = 0;
	a++;
	cout << a << endl;

}
int main()
{
	SomeFunction();
	SomeFunction();
	SomeFunction();
	/*Star(55);
	Star();
	Star(3);*/
	//int a = 5, b = 55, c = 7, d = 4;
	//Foo();
	//Foo(a);
	/*Foo(11, 22);
	Foo(a,b, c);
	Foo(7,3, 5,88);*/
	//Show();
	//setA();
	//Show();
	//setSecondA();
	//Show();

	////local variable
	//int c;//garbage
	//int a = 5;
	//if (a == 5)
	//{
	//	int b = 7;
	//     cout << b << endl;
	//}

	//cout << a << endl;
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << i << endl;
	//}

#pragma region Functions
	/*srand(time(0));
	const int row = 5;
	const int col = 7;
	int arr[row][col];
	InitMatrix(arr, row, col);
	ShowMatrix(arr, row, col);
	int summa = SummaMatrix(arr, row, col);
	cout << "Summa = " << summa << endl;*/
	/*const int size = 10;
	int arr[size]; 
	InitArr(arr, size);
	ShowArr(arr, size);
	int summa = SummaArr(arr, size);
	cout << "Summa = " << summa << endl;*/



	/*int a = 5, b = 7;
	cout << "a = " << a << " b = " << b << endl;
	Change(a, b);
	cout << "a = " << a << " b = " << b << endl;
	First();
	cout<< "Pow in main = "<< Pow(2, 3)<<endl;
	int pow = Pow(2, 3);
	cout << "Pow in main = " <<pow << endl;

	AnyLine('+' ,3);
	AnyLine('/' ,2);
	Star(5);
	Star(3);
	Star(15);

	Hello();
	Hello();
	Hello();
	Hello();
	Hello();
	Hello();*/
#pragma endregion  
}

void InitMatrix(int arr[][7], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 50 + 10;
		}
	}
}
void ShowMatrix(int arr[][7], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
int SummaMatrix(int arr[][7], int row, int col)
{
	int summa = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			summa += arr[i][j];
		}
	}
	return summa;
}