
#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    string title;
    string author;
    int publishedYear;

    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Published Year: " << publishedYear << endl;
        cout << endl;
    }
};

int main()
{
    Book books[3];

    books[0].title = "C++ Programming";
    books[0].author = "Bjarne Stroustrup";
    books[0].publishedYear = 1985;

    books[1].title = "The C++ Language";
    books[1].author = "Bjarne Stroustrup";
    books[1].publishedYear = 1998;

    books[2].title = "java";
    books[2].author = "brenden eich";
    books[2].publishedYear = 1995;

    for (int i = 0; i < 3; i++)
    {
        books[i].display();
    }

    return 0;
}
