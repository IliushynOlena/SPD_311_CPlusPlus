
#include <iostream>
using namespace std;


struct Vagon
{
	int number;
	int seat;
	int passengers;
	Vagon()
	{
		number = 0;
		seat = 0;
		passengers = 0;
	}
	Vagon(int number, int seat, int passengers)
	{
		this->number = number;
		this->seat = seat;
		this->passengers = passengers;
	}
	void Show()
	{
		cout << "Vagon number: " << number << endl;
		cout << "Vagon seat: " << seat << endl;
		cout << "Vagon passengers: " << passengers << endl;
		cout << endl;
	}
};
class Train
{
private:
	string model;
	Vagon* vagons;
	int countVagon;
public:
	Train()
	{
		model = "no model";
		vagons = nullptr;
		countVagon = 0;
	}
	Train(string model)
	{
		this->model = model;
		vagons = nullptr;
		countVagon = 0;
	}
	Train(const Train& other)
	{
		this->model = other.model;
		this->countVagon = other.countVagon;
		this->vagons = new Vagon[other.countVagon];
		for (int i = 0; i < countVagon; i++)
		{
			vagons[i] = other.vagons[i];
		}
	}
	~Train()
	{
		if (vagons != nullptr)
		{
			delete[]vagons;
			cout << "Destructor " << model << endl;
		}
	}
	void Show()
	{
		cout << "Model: " << model << endl;
		cout << "Amount of vagons: " << countVagon << endl;
		for (int i = 0; i < countVagon; i++)
		{
			vagons[i].Show();
		}
	}
	void AddVagon(Vagon v)
	{
		countVagon++;
		Vagon* temp = new Vagon[countVagon];
		for (int i = 0; i < countVagon - 1; i++)
		{
			temp[i] = vagons[i];
		}
		temp[countVagon - 1] = v;
		if (vagons != nullptr)
			delete[]vagons;
		vagons = temp;
	}
	void AddPassengerOne(int number)
	{
		for (int i = 0; i < countVagon; i++)
		{
			if (vagons[i].number == number)
			{
				vagons[i].passengers++;
			}
		}
	}
	void AddPassengers(int number, int a)
	{
		for (int i = 0; i < countVagon; i++)
		{
			if (vagons[i].number == number)
			{
				vagons[i].passengers += a;
			}
		}
	}
	Vagon GetVagon(int index)
	{
		if (index < 0 || index > countVagon) return Vagon();
		return vagons[index];
	}
	Vagon operator[](int index)
	{
		if (index < 0 || index > countVagon) return Vagon();
		return vagons[index];
	}
	void operator()(int count)
	{
		for (int i = 0; i < countVagon; i++)
		{
			vagons[i].passengers += count;
		}
	}void operator()(int count, int number)
	{
		for (int i = 0; i < countVagon; i++)
		{
			if(vagons[i].number == number)
				vagons[i].passengers += count;
		}
	}
};

int main()
{
	Train tr("Bob");
	tr.Show();
	tr.AddVagon(Vagon(1, 60, 32));
	tr.AddVagon(Vagon(2, 30, 17));
	tr.AddVagon(Vagon(3, 45, 42));
	tr.AddVagon(Vagon(4, 80, 65));
	tr.AddVagon(Vagon(5, 15, 8));
	cout << "------------------------------" << endl;
	tr.GetVagon(1).Show();
	cout << "------------------------------" << endl;
	tr[0].Show();
	cout << "------------------------------" << endl;
	tr(15);
	tr(10, 1);
	tr.Show();
	tr.AddPassengerOne(2);
	tr.AddPassengers(5, 3);
	tr.Show();
	cout << "copy train" << endl;
	Train copy(tr);
	copy.Show();
}

