#include <iostream>
#include <windows.h>
using namespace std;

class Car
{
protected:
    //public private protected
    string model;
    int year;
    int speed;
    float volume;
public:
    Car():model("no model"),year(0),speed(0),volume(0){}
    Car(string m, int y, float v):model(m),year(y),speed(0),volume(v){}
    virtual void Drive()const
    {
        cout << "I am a Car! I can drive with speed " << speed<< "km/h" << endl;
    }
    virtual void Print()const
    {
        cout << "Model : " << model << endl;
        cout << "Year : " << year << endl;
        cout << "Speed : " << speed << endl;
        cout << "Volume : " << volume << endl;
    }
    void SeedSpeed(int speed)
    {
        this->speed = speed;
    }
};
class PoliceCar: public Car//public private protected
{
    int soundVolume;
public:
    PoliceCar():soundVolume(0),Car(){}
    PoliceCar(string m, int y, int s, float v, int sound):soundVolume(sound),Car(m,y,v){}
    void Drive()const override
    {
        cout << "I am a Police Car! I can drive with speed " << speed << "km/h" << endl;
    }
    void Print()const 
    {
        Car::Print();
        cout << "sound Volume : " << soundVolume << endl;
    }
    void BeepBeep()
    {
        Beep(330, 100); Sleep(100);
        Beep(330, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(330, 100); Sleep(300);
        Beep(392, 100); Sleep(700);
        Beep(196, 100); Sleep(700);
        Beep(262, 300); Sleep(300);
        Beep(196, 300); Sleep(300);
        Beep(164, 300); Sleep(300);
        Beep(220, 300); Sleep(100);
        Beep(246, 100); Sleep(300);
        Beep(233, 200);
        Beep(220, 100); Sleep(300);
        Beep(196, 100); Sleep(150);
        Beep(330, 100); Sleep(150);
        Beep(392, 100); Sleep(150);
        Beep(440, 100); Sleep(300);
        Beep(349, 100); Sleep(100);
        Beep(392, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(100);
        Beep(247, 100); Sleep(500);
        Beep(262, 300); Sleep(300);
        Beep(196, 300); Sleep(300);
        Beep(164, 300); Sleep(300);
        Beep(220, 300); Sleep(100);
        Beep(246, 100); Sleep(300);
        Beep(233, 200);
        Beep(220, 100); Sleep(300);
        Beep(196, 100); Sleep(150);
        Beep(330, 100); Sleep(150);
        Beep(392, 100); Sleep(150);
        Beep(440, 100); Sleep(300);
        Beep(349, 100); Sleep(100);
        Beep(392, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(100);
        Beep(247, 100); Sleep(900);
        Beep(392, 100); Sleep(100);
        Beep(370, 100); Sleep(100);
        Beep(349, 100); Sleep(100);
        Beep(311, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(207, 100); Sleep(100);
        Beep(220, 100); Sleep(100);
        Beep(262, 100); Sleep(300);
        Beep(220, 100); Sleep(100);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(500);
        Beep(392, 100); Sleep(100);
        Beep(370, 100); Sleep(100);
        Beep(349, 100); Sleep(100);
        Beep(311, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(523, 100); Sleep(300);
        Beep(523, 100); Sleep(100);
        Beep(523, 100); Sleep(1100);
        Beep(392, 100); Sleep(100);
        Beep(370, 100); Sleep(100);
        Beep(349, 100); Sleep(100);
        Beep(311, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(207, 100); Sleep(100);
        Beep(220, 100); Sleep(100);
        Beep(262, 100); Sleep(300);
        Beep(220, 100); Sleep(100);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(500);
        Beep(311, 300); Sleep(300);
        Beep(296, 300); Sleep(300);
        Beep(262, 300); Sleep(1300);
        Beep(262, 100); Sleep(100);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(300);
        Beep(330, 200); Sleep(50);
        Beep(262, 200); Sleep(50);
        Beep(220, 200); Sleep(50);
        Beep(196, 100); Sleep(700);
        Beep(262, 100); Sleep(100);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(100);
        Beep(330, 100); Sleep(700);
        Beep(440, 100); Sleep(300);
        Beep(392, 100); Sleep(500);
        Beep(262, 100); Sleep(100);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(294, 100); Sleep(300);
        Beep(330, 200); Sleep(50);
        Beep(262, 200); Sleep(50);
        Beep(220, 200); Sleep(50);
        Beep(196, 100); Sleep(700);
        /*Intro*/
        Beep(330, 100); Sleep(100);
        Beep(330, 100); Sleep(300);
        Beep(330, 100); Sleep(300);
        Beep(262, 100); Sleep(100);
        Beep(330, 100); Sleep(300);
        Beep(392, 100); Sleep(700);
        Beep(196, 100); Sleep(700);
        Beep(196, 100); Sleep(125);
        Beep(262, 100); Sleep(125);
        Beep(330, 100); Sleep(125);
        Beep(392, 100); Sleep(125);
        Beep(523, 100); Sleep(125);
        Beep(660, 100); Sleep(125);
        Beep(784, 100); Sleep(575);
        Beep(660, 100); Sleep(575);
        Beep(207, 100); Sleep(125);
        Beep(262, 100); Sleep(125);
        Beep(311, 100); Sleep(125);
        Beep(415, 100); Sleep(125);
        Beep(523, 100); Sleep(125);
        Beep(622, 100); Sleep(125);
        Beep(830, 100); Sleep(575);
        Beep(622, 100); Sleep(575);
        Beep(233, 100); Sleep(125);
        Beep(294, 100); Sleep(125);
        Beep(349, 100); Sleep(125);
        Beep(466, 100); Sleep(125);
        Beep(587, 100); Sleep(125);
        Beep(698, 100); Sleep(125);
        Beep(932, 100); Sleep(575);
        Beep(932, 100); Sleep(125);
        Beep(932, 100); Sleep(125);
        Beep(932, 100); Sleep(125);
        Beep(1046, 675);

        
    }
};
class SportCar : public Car//public private protected
{
    int turbo;
public:
    SportCar() :turbo(0), Car() {}
    SportCar(string m, int y, int s, float v, int t) :turbo(t), Car(m, y, v) {}
    void Drive()const 
    {
        cout << "I am a Sport Car! I can drive with speed " << speed << "km/h" << endl;
    }
    void Print()const 
    {
        Car::Print();
        cout << "Turbo : " << turbo << endl;
    }
   
};
class TestCar: PoliceCar
{

};
void TestDrive(Car &car)
{
    car.SeedSpeed(60);
    car.Drive();    
}

int main()
{
    Car simpleCar("Megan", 2015, 1.5);
    simpleCar.SeedSpeed(60);
    simpleCar.Drive();
    simpleCar.Print();

    PoliceCar police("Toyota",2022,200,2.2,500);
    police.SeedSpeed(250);
    police.Drive();
    police.Print();
    //car.BeepBeep();
    SportCar sport("Formula 1", 2024, 300, 5.0, 50);
    sport.SeedSpeed(300);
    sport.Drive();
    sport.Print();
    TestDrive(simpleCar);
    TestDrive(police);
    TestDrive(sport);
    int arr[3];
    string strarr[5];
    Car cars[5];
    PoliceCar carsp[5];
    
    Car* carSalon[3]
    {
        new Car("Megan", 2015, 1.5),
        new PoliceCar("Toyota",2022,200,2.2,500),
        new SportCar("Formula 1", 2024, 300, 5.0, 50)
    };

    for (int i = 0; i < 3; i++)
    {
        carSalon[i]->Drive();
        carSalon[i]->Print();
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        delete carSalon[i];
    }
    
}
