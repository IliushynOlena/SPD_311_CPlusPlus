#include "Library.h"

Library::Library()
{
	address = "no address";
	books = nullptr;
	countBooks = 0;
}

Library::Library(string address)
{
	this->address = address;
	books = nullptr;
	countBooks = 0;
}

void Library::Show() const
{
	cout << "Address : " << address << endl;
	for (int i = 0; i < countBooks; i++)
	{
		books[i].ShowInfo();
		cout << endl;
	}
}

void Library::AddBook(Book book)
{
	Book* temp = new Book[countBooks + 1];
	for (int i = 0; i < countBooks; i++)
	{
		temp[i] = books[i];
	}
	temp[countBooks] = book;
	if (books != nullptr)
		delete[]books;
	books = temp;
	countBooks++;
}

Library::Library(const Library& other)
{
	this->address = other.address;
	this->countBooks = other.countBooks;
	//this->books = other.books;//error
	this->books = new Book[other.countBooks];
	for (int i = 0; i < other.countBooks; i++)
	{
		this->books[i] = other.books[i];
	}
}

Library Library::operator=(const Library& other)
{
	this->address = other.address;
	this->countBooks = other.countBooks;
	//this->books = other.books;//error
	if (books != nullptr)
		delete[]books;
	this->books = new Book[other.countBooks];
	for (int i = 0; i < other.countBooks; i++)
	{
		this->books[i] = other.books[i];
	}
	return *this;
}

Library::~Library()
{
	if (books != nullptr)
		delete[]books;
}
