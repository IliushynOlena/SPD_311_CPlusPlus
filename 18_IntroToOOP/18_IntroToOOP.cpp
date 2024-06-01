#include <iostream>
using namespace std;
/*
struct Player//object
{
	string name;//char name[20];
	short age;
	int games;
	int goals;
};

void PrintPlayer(Player& pl)
{
	cout << "Name : " << pl.name << endl;
	cout << "Age : " << pl.age << endl;
	cout << "Games : " << pl.games << endl;
	cout << "Goals : " << pl.goals << endl;
}
void InitPlayer(Player& pl)
{
	cout << "Name : "; cin >> pl.name;
	cout << "Age : "; cin >> pl.age;
	pl.games = 0;
	pl.goals = 0;
}
void AddGameToPlayer(Player &pl, int goals = 0)
{
	pl.games++;
	pl.goals += goals;
}
*/

class Player//private
{
private:
	string name;
	short age;
	int games;
	int goals;
public:
	void InitPlayer()
	{
		cout << "Name : "; cin >> name;
		cout << "Age : "; cin >> age;
		games = 0;
		goals = 0;
	}
	void PrintPlayer()
	{
		cout << "Name : " << name << endl;
		cout << "Age : " << age << endl;
		cout << "Games : " << games << endl;
		cout << "Goals : " << goals << endl;
	}
	void AddGameToPlayer( int goals = 0)
	{
		games++;
		this->goals += goals;
		
	}

};



struct Player1//public
{
	string name;//char name[20];
	short age;
	int games;
	int goals;
};
void Test(int& a)
{
	cout << a << endl;
	(a)++;
	cout << a << endl;
}
int main()
{
	
	Player p;
	p.InitPlayer();
	p.PrintPlayer();
	p.AddGameToPlayer(2); p.PrintPlayer();
	p.AddGameToPlayer(5); p.PrintPlayer();
	p.AddGameToPlayer(); p.PrintPlayer();
	//int a = 5;
	//int* pa = &a;
	//cout <<a<< endl;
	//Test(&a);
	//cout <<a<< endl;
	//Player pl;
	//InitPlayer(pl);
	//PrintPlayer(pl);
	//AddGameToPlayer(pl, 0); PrintPlayer(pl);
	//AddGameToPlayer(pl, 2); PrintPlayer(pl);
	//AddGameToPlayer(pl, 1); PrintPlayer(pl);
	//AddGameToPlayer(pl, 5); PrintPlayer(pl);
	/*pl.name = "Olena";
	cout << "Enter name : ";
	cin >> pl.name;*/

}

