#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    string title;
    string author;
    int price;

    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Book b1, b2;

    b1.title = "Harry Potter";
    b1.author = "J.K. Rowling";
    b1.price = 1500;

    b2.title = "Programming in C++";
    b2.author = "Robert Lafore";
    b2.price = 2200;

    b1.display();
    b2.display();

    return 0;
}