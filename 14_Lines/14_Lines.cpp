#include <iostream>
using namespace std;

int main()
{
    char word[5] = { 'C','a','t','!','\0' };
	for (int i = 0; i < 5; i++)
	{
		cout << word[i];
	}
	char mystring[] = "string";
	cout << mystring << " has " << sizeof(mystring) << " characters . " << endl;
	for (int i = 0; i < sizeof(mystring); i++)
	{
		cout << static_cast<int>(mystring[i]) << " ";
	}

	//mystring = "cat";
	mystring[1] = 'p';
	//int arr[] = { 4,5,6,7,8 };
	//arr[0] = 99;
	//cout << mystring << endl;

	char name[15] = "Max";
	cout << "Your name is : " << name << endl;
	cout << name << " has " << sizeof(name) << " characters in line " << endl;
	cout << name << " has " << strlen(name) << " letters " << endl;

	char my_name[255];
	cout << "Enter your name : ";
	cin >> my_name;
	//cin.getline(my_name, 255);
	cout << "You entered : " << my_name << endl;


	char text[] = "Print this!";
	char copyText[53];

	strcpy_s(copyText, text);
	cout << copyText << endl;


	char arr[255] = "Return the head of a list ";
	cout << arr << endl;
	int len = strlen(arr);
	cout << "Lenght : " << len << endl;
	//cin >> arr;
	//cin.getline(arr, 255);
	//len = strlen(arr);
	//cout << arr << endl;
	//cout << "Lenght : " << len << endl;
	_strupr_s(arr);
	cout << arr << endl;
	_strlwr_s(arr);
	cout << arr << endl;

	_strrev(arr);
	cout << arr << endl;
	_strrev(arr);
	cout << arr << endl;

	char arr2[255]{};
	strcpy_s(arr2, arr);
	cout << "Copy arr2 : ";
	cout << arr2 << endl;
	arr2[5] = '\0';
	cout << "Copy arr2 : ";
	cout << arr2 << endl;

	cout << "Add to array : " << endl;
	strcat_s(arr, ".........");
	cout << arr << endl;
	cin >> arr2;
	strcat_s(arr, arr2);
	cout << arr << endl;
	strncat_s(arr, arr2,5);
	cout << arr << endl;


}

