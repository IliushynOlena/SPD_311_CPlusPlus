#include <iostream>
using namespace std;

class Document
{
private:
    string name;
    string format;
    int pages;
public:
    Document() :name("no name"), format("no format"), pages(0) {}
    Document(string n, string f, int p) :name(n), format(f), pages(p) {}
    void Print()const
    {
        cout << "Name : " << name << endl;
        cout << "Format : " << format << endl;
        cout << "Pages : " << pages << endl;
    }

};

class Cartridge
{
public:
    enum Type { Standart, XL };
private:
    float volume;
    string color;
    Type type;
public:
    Cartridge() :volume(0), color("red"), type(Standart) {}
    Cartridge(float v, string c, Type t) :volume(v), color(c), type(t) {}
    void Print()const
    {
        cout << "Volume : " << volume << endl;
        cout << "Color : " << color << endl;
        cout << "Type : ";
        switch (type)
        {
        case Cartridge::Standart:cout << "Standart" << endl; break;
        case Cartridge::XL:cout << "XL" << endl; break;
        }
        cout << endl;
    }
};
class Scanner
{
    float scanResolution;
    float height, width;
public:
    Scanner() :scanResolution(0), height(0), width(0) {}
    Scanner(float s, float h, float w) :scanResolution(s), height(h), width(w) {}
    void Print()const
    {
        cout << "Scanner with : " << scanResolution << "dpi " << endl;
        cout << "Scan area : h = " << height << " mm, w = " << width << " mm " << endl;
    }

};

class Printer
{
    string model;
    Cartridge* cartridges;//default constructor
    int countCartridges;
    Scanner scanner;//default constructor
    Document* doc;//nullptr
public:
    Printer() :model("no model"), cartridges(nullptr), countCartridges(0), doc(nullptr) {}
    Printer(string model, float scanR, float h, float w) :doc(nullptr)
    {
        this->model = model;
        scanner = Scanner(scanR, h, w);

        countCartridges = 4;
        cartridges = new Cartridge[countCartridges];

        cartridges[0] = Cartridge(100, "Black", Cartridge::Type::Standart);
        cartridges[1] = Cartridge(100, "Red", Cartridge::Type::Standart);
        cartridges[2] = Cartridge(100, "Green", Cartridge::Type::Standart);
        cartridges[3] = Cartridge(100, "Blue", Cartridge::Type::Standart);
    }
    void Scan()
    {
        cout << "Scanning......" << endl;
    }
    void PrintDocument()
    {
        cout << "Printing......" << endl;
        if (doc == nullptr)
        {
            cout << "No document to print" << endl;
        }
        else
        {
            doc->Print();
        }

    }
    void Cancel()
    {
        this->doc = nullptr;
    }
    void ShowInfo()
    {
        scanner.Print();
        for (int i = 0; i < countCartridges; i++)
        {
            cartridges[i].Print();
        }
    }
    ~Printer()
    {
        if (cartridges != nullptr)
            delete[]cartridges;
    }
    void AddToQueue(Document* doc)
    {
        this->doc = doc;
    }
};


int main()
{
    Printer printer("Cannon", 300, 30, 50);
    printer.PrintDocument();
    printer.Scan();
    printer.ShowInfo();

    Document doc1("Passport", "A5", 5);
    Document doc2("C++ for beginners", "A4", 1555);

    printer.AddToQueue(&doc1);
    printer.PrintDocument();
    printer.AddToQueue(&doc2);
    printer.Cancel();
    printer.PrintDocument();
}

