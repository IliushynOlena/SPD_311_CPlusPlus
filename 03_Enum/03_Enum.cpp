#include <iostream>
using namespace std;

int main()
{
    //const int USA = 1;
    //const int Ukraine = 380;
    //const int Italy = 39;
    //const int Australia = 61;
    enum Indexes{ USA = 1 , Ukraine = 380, Italy = 39, Australia = 61 };

    enum coins{penny = 1, nickel = 5, dime = 10, quarter = 25,  half = 50, large_dollar = 100};

    enum direction{ LEFT, RIGHT, TOP, BOTTOM};
    enum Menu{ Add = 1, Remove , Edit, Sort, Search, Exit = 0};

    cout << "Add = " << Add << endl;
    cout << "Remove = " << Remove << endl;
    cout << "Edit = " << Edit << endl;
    cout << "Sort = " << Sort << endl;
    cout << "Search = " << Search << endl << endl;
    cout << "Exit = " << Exit << endl << endl;


    cout << "Left = " << LEFT << endl;
    cout << "RIGHT = " << RIGHT << endl;
    cout << "TOP = " << TOP << endl;
    cout << "BOTTOM = " << BOTTOM << endl;



    int coin;
    cout << "Please, enter the value of American coin" << endl;
    cin >> coin;

    switch (coin)
    {
    case penny:cout << "Penny" << endl; break;
    case nickel:cout << "nickel" << endl; break;
    case dime:cout << "dime" << endl; break;
    case quarter:cout << "quarter" << endl;break;
    case half:cout << "half" << endl; break;
    case large_dollar:cout << "large_dollar" << endl;break;
    default: cout << "Not found " << endl; break;
    }


}
