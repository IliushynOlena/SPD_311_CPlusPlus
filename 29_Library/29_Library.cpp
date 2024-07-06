#include"Library.h"


int main()
{
	Book b1("C++ for beginners", Genre::Programming, 1500, "Stiven Prata");
	b1.ShowInfo();
    cout << endl << endl;
    Library lib("Rivne, Kyivska 16");
    lib.AddBook(b1);
    lib.AddBook(Book("Harry Potter", Genre::Fantasy, 800, "Royling" ));
    lib.AddBook(Book("Maria", Genre::History, 300, "Kotliarevskuy" ));
    lib.AddBook(Book("The Lord of the Rings ", Genre::Fantasy, 450, "Jonh Ronald"));
    lib.Show();
    cout << "------------ Copy Library--------------" << endl;
    Library copy(lib);
    copy.Show();

    cout << "------------ Operator Library--------------" << endl;
    Library temp = copy;
    temp.Show();

    temp = copy;
}

