#include <iostream>
#include <fstream>
using namespace std;

class Point
{
private:
    double x;
    double y;
    double z;

public:

    void setX(double x)
    {
        this->x = x;
    }
    void setY(double y)
    {
        this->y = y;
    }
    void setZ(double z)
    {
        this->z = z;
    }
    double getX()
    {
        return x;
    }
    double getY()
    {
        return y;
    }
    double getZ()
    {
        return z;
    }
    void PrintPoint()
    {
        cout << "X : " << x << endl;
        cout << "Y : " << y << endl;
        cout << "Z : " << z << endl;

    }
    void InitPoint()
    {
        cout << "X : "; cin >> x;
        cout << "Y : "; cin >> y;
        cout << "Z : "; cin >> z;
    }
    void SaveToFile()
    {
        ofstream out("Point.txt");
        out << x;
        out << ":";
        out << y;
        out << ":";
        out << z;
        out << "|";
        out.close();
    }
    void ReadFromFile()
    {
        ifstream in("Point.txt");
        char buffX[10], buffY[10], buffZ[10];
        in.getline(buffX, 10, ':');
        in.getline(buffY, 10, ':');
        in.getline(buffZ, 10, '|');
        x = atoi(buffX);
        y = atoi(buffY);
        z = atoi(buffZ);
    }
};
int main()
{
   // Point st;
   // st.setX(2);
   // st.setY(6);
   // st.setZ(12);

   // cout << "X : " << st.getX() << "  Y : " << st.getY() << "  Z : " << st.getZ() << endl;


   // //Point p;
   // //p.InitPoint();
   //// p.PrintPoint();

   // st.SaveToFile();
    Point read;
    read.ReadFromFile();
    read.PrintPoint();

}