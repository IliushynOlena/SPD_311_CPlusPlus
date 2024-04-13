#include <iostream>
using namespace std;

void InitArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
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
int LinearSearch(int arr[], int size, int key)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
			return i;
	}
	return -1;
}
void SelectSort(int arr[], int size)
{
	int temp, index;
	//temp = 3
	//3 7 8 9 5 4
	for (int i = 0; i < size; i++)
	{
		index = i;//0
		temp = arr[i];//5
		for (int j = i+1; j < size; j++)
		{
			if (arr[j] < temp)
			{
				temp = arr[j];//3
				index = j; //4
		    }
		}
		if (index != i)
		{
			arr[index] = arr[i];
			arr[i] = temp;
		}
	}
}
void BubbleSort(int arr[], int size)
{
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = size-1; j > i; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
		    }
		}
	}
}
void ShakerSort(int arr[], int size)
{
	int j, index = size - 1;
	int left = 1, right = size - 1;
	int temp;
	do
	{
		for (int j = right; j >= left; j--)
		{
			if (arr[j - 1] > arr[j]) {
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
				index = j;//0
			}
		}
		left = index + 1;
		for ( j = left; j <= right; j++)
		{
			if (arr[j - 1] > arr[j]) {
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
				index = j;//9
			}
		}
		right = index - 1;

	} while (left < right);
}
void InsertSort(int arr[], int size)
{
	//11 4 2 7 3 11 8 9 6 
	int temp;
	int j;
	for (int i = 0; i < size; i++)
	{
		//i = 1;		
		temp = arr[i];//4
		for (j = i - 1; j >= 0 && arr[j] > temp; j--)
		{
			//j = 0
			//arr[j + 1] = 4
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = temp;
	}

}

void Foo(int a)
{
	if (a < 0)return;//break;
		
		
	cout << "Hello " << a << endl;
	a--;
	Foo(a);
}
int SummaArray(int arr[], int size)
{
	int summa = 0;
	for (int i = 0; i < size; i++)
	{
		summa += arr[i];
	}
	return summa;
}
int SummaRecursion(int arr[], int size, int i)
{
	//5 8 9 6 3 4
	if (i + 1 == size)
		return arr[i];
	return arr[i] + SummaRecursion(arr, size, i + 1);
}
void QuickSort(int arr[], int B, int E)
{
	int i = B, j = E;
	int temp, p;
	p = arr[(B + E) / 2];
	do
	{
		while (arr[i] < p)i++;
		while (arr[j] > p)j--;
		if (i <= j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}

	} while (i <= j);

	if (B < j)QuickSort(arr, B, j);
	if (i < E)QuickSort(arr, i, E);
}
int BinarySearch(int arr[], int size, int key)
{
	int B = 0, E = size - 1;
	while (true)
	{
		int p = (B + E) / 2;
		if (key > arr[p])
			B = p + 1;
		else if (key < arr[p])
			E = p - 1;
		else if (key == arr[p])
			return p;
		if (B > E)return -1;
	}
}
int main()
{
	//const int size = 30;
	//int arr[size];
	//InitArr(arr, size);
	//ShowArr(arr, size);
	//QuickSort(arr, 0, size - 1);
	//ShowArr(arr, size);
	////cout << "Summa original : " << SummaArray(arr, size)<<endl;
	////cout << "Summa recursion : " << SummaRecursion(arr, size,0)<<endl;
	//Foo(10);
	
	srand(time(0));
	const int size = 20;
	int arr[size];
	InitArr(arr, size);
	ShowArr(arr, size);
	//SelectSort(arr, size);
	//BubbleSort(arr, size);
	//ShakerSort(arr, size);
	InsertSort(arr, size);
	ShowArr(arr, size);
	int search_key, index;
	cout << "Enter key for find : ";
	cin >> search_key;
	//index = LinearSearch(arr, size, search_key);
	index = BinarySearch(arr, size, search_key);
	if (index != -1)
	{
		cout << "Element was found in index :  " << index << endl;
	}
	else
	{
		cout << "Element not found!!!" << endl;
	}

	



   
}
