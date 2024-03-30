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
void Star(int count)
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


int main()
{
	int a = 5, b = 7;
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
	Hello();




  
}

