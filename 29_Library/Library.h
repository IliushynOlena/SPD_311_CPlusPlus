#pragma once
#include"Book.h"
class Library
{
	string address;
	Book* books;
	int countBooks;
public:
	Library();
	Library(string address);
	void Show() const;
	void AddBook(Book book);
	Library(const Library& other);
	Library operator = (const Library& other);
	
	~Library();	
};

