#include <iostream>
using namespace std;

int main()
{
	//Цикл з передумовою
	/*while (true)
	{

	}*/
	//Цикл з постумовою
	/*do
	{

	} while (true); */
	//Цикл з параметрами
	/*for (size_t i = 0; i < length; i++)
	{

	}*/


	int counter = 10;
	while (counter < 7)
	{
		counter++;//increment
		cout << "You have seen " << counter << " wonder of world " << endl;
	}

	cout << "Now, you need begin your essay !!!" << endl << endl;

	counter = 10;

	do
	{
		counter++;//increment
		cout << "You have seen " << counter << " wonder of world " << endl;

	} while (counter < 7);
	cout << "Now, you need begin your essay !!!" << endl;

	float a, b, res;
	int new_key;
	

#pragma region old Calculator
	/*cout << "Choose the operation : " << endl;
	cout << "[1] - Add numbers " << endl;
	cout << "[2] - Sub numbers " << endl;
	cout << "[3] - Multi numbers " << endl;
	cout << "[4] - Div numbers " << endl;
	cout << "[0] - Exit " << endl;
	cin >> new_key;*/
//while (new_key != 0)
//{
//	switch (new_key)// key => int char
//	{

//	case 1:
//		cout << "Enter a : ";
//		cin >> a;
//		cout << "Enter b : ";
//		cin >> b;
//		res = a + b;
//		cout << a << " + " << b << " = " << res << endl;
//		break;
//	case 2:
//		cout << "Enter a : ";
//		cin >> a;
//		cout << "Enter b : ";
//		cin >> b;
//		res = a - b;
//		cout << a << " - " << b << " = " << res << endl;
//		break;
//	case 3:
//		cout << "Enter a : ";
//		cin >> a;
//		cout << "Enter b : ";
//		cin >> b;
//		res = a * b;
//		cout << a << " * " << b << " = " << res << endl;
//		break;
//	case 4:
//		cout << "Enter a : ";
//		cin >> a;
//		cout << "Enter b : ";
//		cin >> b;
//		if (b == 0)
//		{
//			cout << "You can't divide by zero" << endl;
//		}
//		else
//		{
//			res = a / b;
//			cout << a << " / " << b << " = " << res << endl;
//		}
//		break;
//	default:
//		cout << "Error choice" << endl;
//		break;
//	case 0:
//		cout << "Good bye! Have a nice day!!!!" << endl;
//	}
//	//
//	cout << "Choose the operation : " << endl;
//	cout << "[1] - Add numbers " << endl;
//	cout << "[2] - Sub numbers " << endl;
//	cout << "[3] - Multi numbers " << endl;
//	cout << "[4] - Div numbers " << endl;
//	cout << "[0] - Exit " << endl;
//	cin >> new_key;//1
//}

#pragma endregion

	do
	{
		//
		cout << "Choose the operation : " << endl;
		cout << "[1] - Add numbers " << endl;
		cout << "[2] - Sub numbers " << endl;
		cout << "[3] - Multi numbers " << endl;
		cout << "[4] - Div numbers " << endl;
		cout << "[0] - Exit " << endl;
		cin >> new_key;//1
		switch (new_key)// key => int char
		{

		case 1:
			cout << "Enter a : ";
			cin >> a;
			cout << "Enter b : ";
			cin >> b;
			res = a + b;
			cout << a << " + " << b << " = " << res << endl;
			break;
		case 2:
			cout << "Enter a : ";
			cin >> a;
			cout << "Enter b : ";
			cin >> b;
			res = a - b;
			cout << a << " - " << b << " = " << res << endl;
			break;
		case 3:
			cout << "Enter a : ";
			cin >> a;
			cout << "Enter b : ";
			cin >> b;
			res = a * b;
			cout << a << " * " << b << " = " << res << endl;
			break;
		case 4:
			cout << "Enter a : ";
			cin >> a;
			cout << "Enter b : ";
			cin >> b;
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
		case 0:
			cout << "Good bye! Have a nice day!!!!" << endl;
		}
	} while (new_key != 0);



}

