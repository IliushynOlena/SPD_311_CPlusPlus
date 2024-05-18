#include <iostream>
using namespace std;

struct Film
{
    int id;
    char name[50];
    char director[50];
    char genre[20];
    float rating;
    float price;
};

void ShowMovie(Film film)
{
    cout << "Name : " << film.name << endl;
    cout << "Director : " << film.director << endl;
    cout << "Genre : " << film.genre << endl;
    cout << "Rating : " << film.rating << endl;
    cout << "Price : " << film.price << endl;
    cout << "______________________________________\n\n";
}
void SearchByName(Film movies[], int size, char name[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp( movies[i].name ,name) == 0)
        {
            ShowMovie(movies[i]);
        }
    }
}
void SearchByGenre(Film movies[], int size, char genre[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(movies[i].genre, genre) == 0)
        {
            ShowMovie(movies[i]);
        }
    }
}
void SearchByDirector(Film movies[], int size, char director[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(movies[i].director, director) == 0)
        {
            ShowMovie(movies[i]);
        }
    }
}
void MostPopularFilm(Film movies[], int size, char genre[])
{
    float max = 0;
    int maxIndex = 0;
    for (int i = 0; i < size; i++)
    {
        if (strcmp(movies[i].genre, genre) == 0)
        {
            if (movies[i].rating > max)
            {
                max = movies[i].rating;
                maxIndex = i;
            }
        }
    }
    ShowMovie(movies[maxIndex]);
}
void ChangeData(Film movies[], int size, int id)
{
    for (int i = 0; i < size; i++)
    {
        if (movies[i].id == id) 
        {
            cin.ignore();
            ShowMovie(movies[i]);
            cout << "Enter name : ";
            cin.getline(movies[i].name,50) ;
            cout << "Enter genre : ";
            cin.getline(movies[i].genre, 50);
            cout << "Enter director : ";
            cin.getline(movies[i].director, 50);
            cout << "Enter rating : ";
            cin >> movies[i].rating;
            cout << "Enter price : ";
            cin >> movies[i].price;
        }
    }
}
int main()
{
    const int size = 4;
    Film movies[size] = 
    {
        {1,"Venom", "Ruben", "Action", 6.7, 22.99},
        {2,"Lord of rings", "Piter Jacson", "Fantacy", 9.6, 49.99},
        {3,"Harry Potter", "David", "Fantacy", 9.2, 33.33},
        {4,"Harry Potter and filosophy stone", "David", "Fantacy", 9.0, 33.99}        
    };

    int num, id;
    char name[50];
    do
    {
        cout << "\t\t\tMenu " << endl;
        cout << "\t Search by name             [1]" << endl;
        cout << "\t Search by genre            [2]" << endl;
        cout << "\t Search by director         [3]" << endl;
        cout << "\t Most popular film          [4]" << endl;
        cout << "\t Show all                   [5]" << endl;
        cout << "\t Change Data                [6]" << endl;
        cout << "\t Exit                       [0]" << endl;
        cin >> num;
        cin.ignore();
        switch (num)
        {
        case 1:
            cout << "Enter name of movie : ";
            //cin >> name;
            cin.getline(name, 50);
            SearchByName(movies, size, name);
            break;
        case 2:
            cout << "Enter genre of movie : ";           
            cin.getline(name, 50);
            SearchByGenre(movies, size, name);
            break;
        case 3:
            cout << "Enter director of movie : ";
            cin.getline(name, 50);
            SearchByDirector(movies, size, name);
            break;
        case 4:
            cout << "Enter genre of movie : ";
            cin.getline(name, 50);
            MostPopularFilm(movies, size, name);
            break;
        case 5:
            for (int i = 0; i < size; i++)
            {
                ShowMovie(movies[i]);
            }
            break;
        case 6:
            cout << "Enter id to change data : ";
            cin >> id;
            ChangeData(movies, size, id);
            break;
        case 0:
            cout << "Good bye ! Have a nice day!!!!" << endl;
            break;
        default:
            cout << "Erroe choice " << endl;
            break;
        }



    } while (num!=0);
}

