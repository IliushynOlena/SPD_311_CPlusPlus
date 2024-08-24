#include <iostream>
using namespace std;

class Enemy {
protected://protected = private => child = public
    string name;
    int health;
    float strength;
    static const int maxHealth = 100;
public:
    Enemy() :name("no name"), health(maxHealth), strength(0) {}
    Enemy(string n, float s) :name(n), health(maxHealth), strength(s) {}
  
    void Print()const
    {
        cout << "Name : " << name << endl;
        cout << "Health : " << health << "%"<<  endl;
        cout << "Strength : " << strength << endl;
    }
    void DecreaseHealth(int value)
    {
        if (health - value <= 0)
            health = 0;
        else
            health -= value;
    }
    bool IsAlive()const
    {
        return health > 0;
    }
};
//Inheritance 
//class Child : [spetificator] Parent
//[spetificator] = public private protected
class Dragon : public Enemy
{
    float fire;//7
public:
    Dragon() : fire(0), Enemy() {}
    Dragon(string n,float s, float f) : fire(f), Enemy(n,s) {}
   
    float Attack()
    {
        cout << "Attacking with strength " << strength << endl;
        return strength;
    }
    void Fight(int damage)//20
    {
        cout << "Getting " << damage << " damage ...." << endl;
        DecreaseHealth(damage - fire);
        cout << "Health after damage " << health << " % " << endl;
    }
    void Print()const
    {
        cout << "----------------- Dragon "<< name<< " ------------------ - " << endl;
        Enemy::Print();
        cout << "Fire : " << fire << endl;

    }
};
class Monster: public Enemy
{
    float runSpeed;
public:
    Monster() : runSpeed(0), Enemy() {}
    Monster(string n, float s, float run) : runSpeed(run), Enemy(n,s) {}
   
    void Print()const
    {
        cout << "----------------- Monster " << name << " ------------------ - " << endl;
        Enemy::Print();
        cout << "run Speed : " << runSpeed << endl;
    }
    void Run()
    {
        cout << "run Speed : " << runSpeed <<" km/h" << endl;
    }
};
int main()
{
    Dragon dragon("Dragon",5,2);
    Dragon boss("Boss",7,3);
    int i = 1;
    do
    {
        cout << "------------- Round [" << i << " ] ------------------" << endl;
        boss.Fight(dragon.Attack());
        dragon.Fight(boss.Attack());

        boss.Print();
        dragon.Print();
        i++;
        cout << endl;
    } while (dragon.IsAlive()&& boss.IsAlive());


    Monster monster("Halk", 10, 150);
    monster.Run();
   
   
    
}

