#include <iostream>
using namespace std;
class Square;
class Rectangle
{
    //operator typename(){}//1
    //operator typename()const{}//2
    //explict operator typename()const{}//3
private:
    int w;
    int h;
public:
    Rectangle() :w(2), h(2) {}
    Rectangle(int v) :w(v), h(v) {}
    Rectangle(int w, int h) :w(w), h(h) {}
    void Print()
    {
        cout << "Height : " << h << " . Width : " << w << endl;
    }
    explicit operator int()
    {
        return w * h;
    }
    operator Square();
};


class Square
{
private:
    int side;
public:
    Square() :side(2) {}
    Square(int s) :side(s) {}
    void Print()
    {
        cout << "Side : " << side << " . Side : " << side << endl;
    }
    operator Rectangle()
    {
        Rectangle res(side, side + 10);
        return res;
    }
};

Rectangle::operator Square()
{
    return Square(w + h);
}


int main()
{
    
    int a = 3.36;//double ==> int 
    float b = 5;//int ==> float

    int value = 9;//int ==> int X
    double valueDouble = value;//int ==> double standart to standart

    Rectangle rectangle(7, 12);
    Square square(10);


    value = (Rectangle) rectangle;//Rectangkle => int  Abstract To standart
    cout << "Square rectangle : " << value << endl;

    rectangle = square;//Square => Rectangle Abstract To Abstract
    rectangle.Print();


    square = rectangle;//Rectangle => Square    Abstract To Abstract
    square.Print();
   
}

