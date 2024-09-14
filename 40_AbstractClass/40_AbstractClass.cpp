#include <iostream>
using namespace std;

class Animal//abstract class
{
    string name;
    string place;
    string species;//type
public:
    Animal() :name("no name"), place("no place"), species("no species") {}
    Animal(string n, string p, string s) :name(n), place(p), species(s) {}
    void ShowInfo()const
    {
        cout << "Name : " << name << endl;
        cout << "Place : " << place << endl;
        cout << "Species : " << species << endl;
    }
    virtual void Move()
    {
        cout << "I am moving....." << endl;
    }
    //pure virtual method
    virtual void MakeSound() = 0;      
};
class Lion: public Animal
{
    float runSpeed;
public:
    Lion():runSpeed(0),Animal(){}
    Lion(string n, string p, string s, float r):runSpeed(r),Animal(n,p,s){}
    void Move()
    {
        cout << "I am running with speed "<< runSpeed << "km/g" << endl;
    }
    void MakeSound()override
    {
        cout << "Rrrrrrrr-rrrrrrrrrrrrr-rrrrrrrrrrrrrr" << endl;
    }
};
class Duck: public Animal
{
    float flyHeight;
public:
    Duck() :flyHeight(0), Animal() {}
    Duck(string n, string p, string s, float f) :flyHeight(f), Animal(n,p,s) {}
    void Move()
    {
        cout << "I am swimming and flyingup to " << flyHeight << "m" << endl;
    }
    void MakeSound()
    {
        cout << "Kryak-kryak-kryak-kryak-kryak" << endl;
    }
};
class Reptile: public Animal //abstract class
{
    float swimDeep;
public:
    Reptile() :swimDeep(0), Animal() {}
    Reptile(string n, string p, string s, float sw) :swimDeep(sw), Animal(n,p,s) {}
    void Move()
    {
        cout << "I am crawling and diving up to " << swimDeep << "m" << endl;
    }
    //pure virtual method
    //virtual void MakeSound() = 0;
};
class Frog: public Reptile
{
public:
    Frog() :Reptile() {}
    Frog(string n, string p, string s, float sw) :Reptile(n,p,s,sw) {}
    
    void MakeSound()
    {
        cout << "Kva-kva-kva-kva-kva-kva-kva" << endl;
    }

};

void RollCall(Animal& animal)
{
    animal.MakeSound();
    animal.Move();
}
int main()
{
    /*Animal animal("Cat", "House", "Mammal");
    animal.MakeSound();*/
   
    Lion lion("King Lion","Africa","Predator",80);
    lion.ShowInfo();
    lion.Move();
    lion.MakeSound();
    cout << endl;
    Duck duck("Donald Dack", "England", "Bird", 9000);
    duck.ShowInfo();
    duck.Move();
    duck.MakeSound();
    cout << endl;
    Frog frog("Crazy Frog", "Swamp", "Amphibian", 5);
    frog.ShowInfo();
    frog.Move();
    frog.MakeSound();
    cout << endl; cout << endl;
    RollCall(lion);
    RollCall(duck);
    RollCall(frog);
    
}

