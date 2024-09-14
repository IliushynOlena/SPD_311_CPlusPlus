#include <iostream>
using namespace std;

class Car
{
public:
    void Drive()
    {
        cout << "I am a Car! I can drive!!!" << endl;
    }
    void Use()
    {
        cout << "I am a Car! I can drive!!!" << endl;
    }
};
class Airplane
{
public:
    void Fly()
    {
        cout << "I am a Airplane! I can fly!!!" << endl;
    }
    void Use()
    {
        cout << "I am a Airplane! I can drive!!!" << endl;
    }
};
class FlyCar: public Car, public Airplane
{

};

class A
{
public:
    int a;
    void Show()
    {
        cout << "A" << endl;
    }
};
class B : public A {};
class C : public A {};
class D1 : public B, public C
{
public:
    int getValue() { return C::A::a; }
};
class D2 :public A {};
class D3 :public D1, public D2 {};

int main()
{
    D1 d;
    cout << d.C::a << endl;

    D3 d3;
   
    d3.D2::A::Show();
    d3.D1::C::A::a;
    Car car;
    car.Drive();
    Airplane air;
    air.Fly();

    FlyCar flyCar;
    flyCar.Drive();
    flyCar.Fly();
    cout << "---------------------------" << endl;
    ((Car)flyCar).Use();
    ((Airplane)flyCar).Use();
    
}

