#include <iostream>
using namespace std;
/*
int GetMax(int* arr, int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
long GetMax(long* arr, int size)
{
    long max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
float GetMax(float* arr, int size)
{
    float max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
*/
template<typename T_arr>
T_arr GetMax(T_arr* arr, int size)
{
    T_arr max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

template<typename T_coll, typename T_value>
class MyClass
{
    T_coll* collection;
    int size;
    T_value value;
public:
    MyClass()
    {
        collection = nullptr;
        size = 0;
        //value = nullptr;
    }
    MyClass(T_coll* coll, T_value value) :collection(coll), value(value) {}
    void SetCollection(T_coll* coll);
    void SetValue(T_value value);
    void Print()
    {
        cout << "Collection : " << collection << endl;
        cout << "Value : " << value << endl;
    }
    ~MyClass()
    {
        if (collection != nullptr)
            delete[]collection;
    }
};
template<typename T_coll, typename T_value>
void MyClass<T_coll,T_value>::SetValue(T_value value)
{
    this->value = value;
}
template<typename T_coll, typename T_value>
void MyClass<T_coll, T_value>::SetCollection(T_coll* coll)
{
    collection = coll;
}

template<typename T_coord>
class Point
{
private:
    T_coord x;
    T_coord y;
public:
    Point()
    {
        x = y = 0;//<-----
    }
    Point(T_coord value)
    {
        x = y = value;//<-----
    }
    Point(T_coord x, T_coord y)
    {
        this->x = x;
        this->y = y;
    }
    void Print()const
    {
        cout << "X: " << x << " Y : " << y << endl;
    }
};

template<typename T_X, typename T_Y>
class NewPoint
{
private:
    T_X x;
    T_Y y;
public:
    NewPoint()
    {
        x = y = 0;//<-----
    }
    NewPoint(T_X value)
    {
        x = y = value;//<-----
    }
    NewPoint(T_X x, T_Y y)
    {
        this->x = x;
        this->y = y;
    }
    void Print()const
    {
        cout << "X: " << x << " Y : " << y << endl;
    }
};
int main()
{
    NewPoint<float, int> point3(1.78, 100);
    point3.Print();
    Point<long> point1(14, 25);
    point1.Print();

    Point <double> point2(3.33, 1.25);
    point2.Print();
    /*
    long* long_arr = new long[4];
    for (int i = 0; i < 4; i++)
    {
        long_arr[i] = i + 1;
        cout << long_arr[i] << " ";
    }
    cout << endl;
    char* char_arr = new char[4];
    for (int i = 0; i < 4; i++)
    {
        char_arr[i] = i + 'a';
        cout << char_arr[i] << " ";
    }
    cout << endl;
    MyClass<long,string> cl1(long_arr, "Class with long collection");
    MyClass<char, string> cl2(char_arr, "Class with char collection");

    cl1.Print();
    cl2.Print();
    */

  /*  delete[]long_arr;
    delete[]char_arr;*/






    //const int size = 10;
    //int numbers1[size] = { 7,8,9,6,3,12,14,5,71,15 };
    //cout << "Max element : " << GetMax(numbers1, size) << endl;
    //long numbers2[size] = { 7,8,9,6,3,12,14,5,71,15 };
    //cout << "Max element : " << GetMax(numbers2, size) << endl;
    //float numbers3[size] = { 7.33,8,9,6.9,3,12.1,14,5,71.99,15 };
    //cout << "Max element : " << GetMax(numbers3, size) << endl;
    ////string colors[6] = { "red","green","blue","yellow","purple" };
    //string colors[6] = { "red","reed","rad" };
    //cout << "Max element : " << GetMax(colors, 6) << endl;
}

