#pragma once
#include <iostream>
using namespace std;

enum Genre{None, Drama, Fantasy,History, Adventure, Programming };

class Book
{
private:
	string title;
	Genre genre;
	int pages;
	string author;
public:
	Book();
	Book(string t, Genre g, int p, string a) : title(t), genre(g), pages(p), author(a) {}
	void ShowInfo()const;


};

