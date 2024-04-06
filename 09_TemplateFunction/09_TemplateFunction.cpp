
#include <iostream>
using namespace std;
//overload by data type
//int max_element(int arr[], int size)
//{
//    int max = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	return max;
//}
//long max_element(long arr[], int size)
//{
//	long max = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	return max;
//}
//float max_element(float arr[], int size)
//{
//	float max = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	return max;
//}
//double max_element(double arr[], int size)
//{
//	double max = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	return max;
//}

template<typename T>
T max_element(T arr[], int size)
{
	T max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
template<typename T1, typename T2>
int Max(T1 a, T2 b)
{
	/*if (a > b)
		return a;
	else
		return b;*/

	return a > b ? a : b;
}
//overload by count of arguments
double multy(double x)
{
	return x * x *x;
}
double multy(double x, double y)
{
	return x * x * y;
}
double multy(double x, double y, double z)
{
	return x * y * z;
}
//double multy(double x = 1.0, double y = 1.0, double z = 1.0, double a = 1.0)
//{
//	return x * y  + a * z;
//}
int main()
{
	cout << "Max = " << Max(2, 3.3) << endl;
	cout << "Max = " << Max(15, 25) << endl;
	cout << "Max = " << Max(3l, 0.5) << endl;
	//cout << "Res = " << multy(3) << endl;
	//cout << "Res = " << multy(3,5) << endl;
	//cout << "Res = " << multy(3,5,7) << endl;
	////cout << "Res = " << multy(3,5,7,88) << endl;



    int x[] = { 10,20,30,40,50,60 };
	cout << "Max element in int array = " << max_element(x, 6) << endl;
	long l[] = { 12l, 15l,18l,55l,147l };
	cout << "Max element in long array = " << max_element(l, 6) << endl;
	float f[] = { 1.2f,3.33f,5.1f,6.7f,8.3f,9.3f };
	cout << "Max element in float array = " << max_element(f, 6) << endl;
	double d[] = { 0.025,0.003,0.14,0.05,0.6,0.7 };
	cout << "Max element in double array = " << max_element(d, 6) << endl;

}

