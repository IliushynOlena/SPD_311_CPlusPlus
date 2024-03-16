#include <iostream>
using namespace std;

int main()
{
	/*
   //uno operators -(-5)  +4

	//binary operator + - * / < > >= <= == !=
	int a = 5, b = 7;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl;

	cout << "a = " << a << endl;
	a = a + 1;
	cout << "a = " << a << endl;
	a += 1;
	cout << "a = " << a << endl;
	//inctement ++
	a++;//a = a + 1; ////postfix form increment
	cout << "a = " << a << endl;
	++a;//prefix form increment
	cout << "a = " << a << endl;


	cout << "a = " << a << endl;
	a = a - 1;
	cout << "a = " << a << endl;
	a -= 1;
	cout << "a = " << a << endl;
	//decrement --
	a--;//	a = a - 1; //postfix form decrement
	cout << "a = " << a << endl;
	--a;//prefix form decrement
	cout << "a = " << a << endl;

	cout << endl;
	int c = 8;
	cout << c++ << endl;//9  ------>
	cout << ++c << endl;//10 <-------
	cout << c << endl;//10

	c = c + 12;
	cout << c << endl;//10
	c += 12;
	cout << c << endl;
	c = c - 12;
	cout << c << endl;//10
	c -= 12;
	cout << c << endl;
	c = c * 12;
	cout << c << endl;//10
	c *= 12;
	cout << c << endl;
	c = c / 12;
	cout << c << endl;//10
	c /= 12;
	cout << c << endl;
	c = c % 12;
	cout << c << endl;//10
	c %= 12;
	cout << c << endl;
	*/

	//int a = 5;
	//int b = 12;
	//int res = a + b;
	////bool, char , short -> int

	////implicit
	//int A = 23.3;//double --> int
	//cout << A << endl;//23

	//unsigned int B = 3000000000;//int --- > unsigned int
	//cout << B << endl;
	//double c = 3.14f;//3.1425896 ---> 3.142589625896314

	////explicit
	//double s = 37.489658741258963;
	////float y = (int) s;//37.48965874+
	////cout << y << endl;

	//int I = 27;
	//short S = 2;
	//float F = 22.3;
	//bool B = false;
	////    int - float + int * int
	//double res = I - F + S * B;
	//cout << "Res = " << res << endl;


	//int a{ 10 };
	//cout << a << endl;
	//int b{ 3.33 };
	//cout << b << endl;


	//cout << (5 > 3) << endl;
	//cout << (5 < 3) << endl;
	//cout << (5 >= 3) << endl;
	//cout << (5 <= 3) << endl;
	//cout << (5 == 3) << endl;
	//cout << (5 != 3) << endl;
	//cout << (5 > 0 && 5 <= 10) << endl;
	//cout << (5 > 0 || 5 > 100) << endl;
	//cout << !(5 == 3) << endl;

	//float a, b;
	//cout << "Enter a and b : ";
	//cin >> a >> b;

	//if (b == 0)
	//{
	//	cout << "You can't divide by zero!!!" << endl;
	//}
	//else
	//{
	//	cout << "Res = " << a / b << endl;
	//}

	//(b == 0) ? cout << "You can't divide by zero!!!" << endl : cout << "Res = " << a / b << endl;

	//int salary;
	//cout << "Enter salary : ";
	//cin >> salary;
	//if (salary > 0)
	//{
	//	cout << "Correct " << endl;
	//}
	//else
	//{
	//	cout << "Incorrect" << endl;
	//}
	//(salary > 0) ? cout << "Correct " << endl : cout << "Incorrect" << endl;
/*
	int day;
	cout << "Enter day : ";
	cin >> day;//1
	if (day == 1)
	{
		cout << "Monday" << endl;
	}
	else if (day == 2)
	{
		cout << "Tuesday" << endl;
	}
	else if (day == 3)
	{
		cout << "Wednesday" << endl;
	}
	else if (day == 4)
	{
		cout << "Thursday" << endl;
	}
	else if (day == 5)
	{
		cout << "Friday" << endl;
	}
	else if (day == 6)
	{
		cout << "Saturday" << endl;
	}
	else if (day == 7)
	{
		cout << "Sunday" << endl;
	}
	else
	{
		cout << "Error number day" << endl;
	}


	float a, b, res;
	cout << "Enter a : ";
	cin >> a;
	cout << "Enter b : ";
	cin >> b;

	char key;
	cout << "Choose the operation : " << endl;
	cout << "[+] - Add numbers " << endl;
	cout << "[-] - Sub numbers " << endl;
	cout << "[*] - Multi numbers " << endl;
	cout << "[/] - Div numbers " << endl;
	cin >> key;//   /

	if (key == '+')
	{
		res = a + b;
		cout << a << " + " << b << " = " << res << endl;
	}
	else if (key == '-')
	{
		res = a - b;
		cout << a << " - " << b << " = " << res << endl;
	}
	else if (key == '*')
	{
		res = a * b;
		cout << a << " * " << b << " = " << res << endl;
	}
	else if (key == '/')
	{
		if (b == 0)
		{
			cout << "You can't divide by zero" << endl;
		}
		else
		{
			res = a / b;
			cout << a << " / " << b << " = " << res << endl;
		}		
	}
	else
	{
		cout << "Error choice" << endl;
	}


	switch (key)// key => int char
	{
	case '+':
		res = a + b;
		cout << a << " + " << b << " = " << res << endl;
		break;
	case '-':
		res = a - b;
		cout << a << " - " << b << " = " << res << endl;
		break;
	case '*':
		res = a * b;
		cout << a << " * " << b << " = " << res << endl;
		break;
	case '/':
		if (b == 0)
		{
			cout << "You can't divide by zero" << endl;
		}
		else
		{
			res = a / b;
			cout << a << " / " << b << " = " << res << endl;
		}
		break;
	default:
		cout << "Error choice" << endl;
		break;
	}
	cout << "Continue......" << endl;

	int new_key;
	cout << "Choose the operation : " << endl;
	cout << "[1] - Add numbers " << endl;
	cout << "[2] - Sub numbers " << endl;
	cout << "[3] - Multi numbers " << endl;
	cout << "[4] - Div numbers " << endl;
	cin >> new_key;//   /
	switch (new_key)// key => int char
	{
	
	case 1:
		res = a + b;
		cout << a << " + " << b << " = " << res << endl;
		break;
	case 2:
		res = a - b;
		cout << a << " - " << b << " = " << res << endl;
		break;
	case 3:
		res = a * b;
		cout << a << " * " << b << " = " << res << endl;
		break;
	case 4:
		if (b == 0)
		{
			cout << "You can't divide by zero" << endl;
		}
		else
		{
			res = a / b;
			cout << a << " / " << b << " = " << res << endl;
		}
		break;
	default:
		cout << "Error choice" << endl;
		break;
	}
*/
	int month;
	cout << "Enter month : ";
	cin >> month;//1
	switch (month)
	{
	case 12:case 1:	case 2:
		cout << "Winter" << endl;break;
	case 3:	case 4:	case 5:
		cout << "Spring" << endl;break;
	case 6:	case 7:	case 8:
		cout << "Summer" << endl;break;
	case 9:	case 10:case 11:
		cout << "Autumn" << endl;break;			
	default:
		cout << "Error month" << endl;
		break;
	}


		

	

	
}
