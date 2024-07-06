#include <iostream>
using namespace std;

class Point
{
private :
	int x;
	int y;
public:
	Point()
	{
		x = y = 0;//<-----
	}
	Point(int value)
	{
		x = y = value;//<-----
	}
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	void Print()const
	{
		cout << "X: " << x << " Y : " << y << endl;
	}
	Point Plus( const Point& other)
	{
		//this Point * 
		Point res(this->x + other.x, this->y + other.y);
		return res;
	}
	Point Minus(const Point& other)
	{
		//this Point * 
		Point res(this->x - other.x, this->y - other.y);
		return res;
	}
	//overload operators 
	Point operator + (const Point& other)
	{
		Point res(this->x + other.x, this->y + other.y);
		return res;
	}
	Point operator - (const Point& other)
	{
		Point res(this->x - other.x, this->y - other.y);
		return res;
	}
	Point operator * (const Point& other)
	{
		Point res(this->x * other.x, this->y * other.y);
		return res;
	}
	Point operator / (const Point& other)
	{
		Point res(this->x / other.x, this->y/ other.y);
		return res;
	}
	Point operator += (const Point& other)
	{
	
		this->x += other.x;
		this->y += other.y;
		return *this;
	}
	Point operator -()
	{
		//Point res(this->x*-1, this->y*-1);
		//Point res(-this->x, -this->y);
		//return res;
		return Point(-x, -y);
	}
	Point operator =(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		return *this;
	}
	bool operator < (const Point& other)
	{/*
		if ((this->x + this->y) < (other.x + other.y))
			return true;
		else
			return false;*/
		return ((this->x + this->y) < (other.x + other.y));
	}
	
	bool operator <= (const Point& other)
	{
		return ((this->x + this->y) <= (other.x + other.y));
	}
	bool operator >= (const Point& other)
	{
		return ((this->x + this->y) >= (other.x + other.y));
	}
	bool operator == (const Point& other)
	{
		return (this->x == other.y) && (this->y == other.y);
	}
	bool operator != (const Point& other)
	{
		return  !(*this == other);
	}
	
	Point operator--()//prefix form decrement 
	{
		this->x--;
		this->y--;
		return *this;
	}
	Point operator++(int a)//postfix form increment 
	{
		
		this->x++;
		this->y++;
		return *this;
	}
	Point operator--(int )//postfix form decrement 
	{
		this->x--;
		this->y--;
		return *this;
	}
	int getX()const
	{
		return x;
	}
	int getY()const
	{
		return y;
	}
	void setX(int x)
	{
		this->x = x;
	}
	void setY(int y)
	{
		this->y = y;
	}
	friend Point operator++(Point& point);
	friend ostream& operator << (ostream& out, const Point& other);
	friend istream& operator >> (istream& in,  Point& other);
};
ostream& operator << (ostream& out, const Point& other)
{
	out << "Operator << : X : " << other.x << " Y : " << other.y << endl;
	return out;
}
istream& operator >> (istream& in,  Point& other)
{
	in >> other.x;
	in >> other.y;
	return in;
}
bool operator > (const Point& left , const Point& right)
{
	return ((left.getX() + left.getY())> (right.getX() + right.getY()));
}
Point operator++(Point& point)//prefix form increment 
{
	point.x++;
	point.y++;
	return point;
}
//Point operator++(Point& point)//prefix form increment 
//{
//	point.setX(point.getX()+ 1);
//	point.setY(point.getY() + 1);
//	return point;
//}

int main()
{
   //uno  ++ , --, -5
	//binary * / - + = == != % < > <= >= += -= *= /= %=
	int a = 5, b = 7;
	a++;
	int* pa = &a;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	a += 5;
	Point p1(5, 7);
	Point p2(9, 4);
	p1 + p2;
	cin >> p1;
	cout << p1 << p2 << endl;;

	++p1;
	cout << "P1: "; p1.Print();
	--p1;
	cout << "P1: "; p1.Print();
	p1++;
	cout << "P1: "; p1.Print();
	p1--;
	cout << "P1: "; p1.Print();



	Point res = p1.Plus(p2);
	cout << "P1: "; p1.Print();
	cout << "P2: "; p2.Print();
	cout << "Res : Plus - "; res.Print();
	res = p1.Minus(p2);
	cout << "Res : Plus - "; res.Print();
	res = p2.Minus(p1);
	cout << "Res : Plus - "; res.Print();
	res = p1 + p2; //p1.operator+(p2);
	cout << "Res : Plus - "; res.Print();
	res = p1 - p2; //p1.operator-(p2);
	cout << "Res : Minus - "; res.Print();
	res = p1 * p2; // p1.operator*(p2);
	cout << "Res : Multy - "; res.Print();
	res = p1 / p2; // p1.operator/(p2);
	cout << "Res : Div - "; res.Print();
	cout << "P1: "; p1.Print();
	cout << "P2: "; p2.Print(); cout << endl;
	p1 += p2;
	cout << "P1: "; p1.Print();
	cout << "P2: "; p2.Print();

	res = -p1;
	cout << "P1: "; p1.Print();
	cout << "P2: "; p2.Print();
	cout << "Res :  "; res.Print();
	cout << endl;
	//p1 = p2;//<---------
	//p2 = p1;//<---------
	cout << "P1: "; p1.Print();
	cout << "P2: "; p2.Print();


	if (p1.operator<(p2))
	{
		cout << "p1 is smaller than p2 " << endl;
	}
	else
	{
		cout << "p2 is smaller than p1 " << endl;
	}
	if (p1 > p2)
	{
		cout << "p1 is bigger than p2 " << endl;
	}
	else
	{
		cout << "p2 is bigger than p1 " << endl;
	}

	if (p1 != p2)
	{
		cout << "Not Equal" << endl;
	}
	else
	{
		cout << "Equal" << endl;
	}

	
}

