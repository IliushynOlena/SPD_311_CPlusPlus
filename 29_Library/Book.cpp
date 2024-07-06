#include "Book.h"

Book::Book()
{
	title = "no title";
	genre = None;
	author = "no author";
	pages = 0;
}

void Book::ShowInfo() const
{
	cout << "Title : " << title << endl;
	cout << "Author : " << author << endl;
	cout << "Pages : " << pages << endl;
	cout << "Genre : ";
	switch (genre)
	{
	case None:cout << "None";break;
	case Drama:cout << "Drama";	break;
	case Fantasy:cout << "Fantasy";	break;
	case History:cout << "History";	break;
	case Adventure:cout << "Adventure";	break;
	case Programming:cout << "Programming";	break;
	}
	cout << endl;
}
