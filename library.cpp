#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class Library
{

public:
    struct Book
    {
        string title;
        string author;
        int isbn;
        bool isAvailable = 1;
    };
    Book *booksHave = new Book[100];

    void displayMenu();
    void addBook();
    void displayBooks();
    void bookSearch();
};
void Library::bookSearch()
{
    string t;
    cout << "Enter the title of the book you are looking for : ";
    cin >> t;   

    for (int i = 0; i < 3; i++)
    {
        if (booksHave[i].title == t)
        {
            cout << "Your book with name " << booksHave[i].title << " is found and available." << endl;
        }
        else
        {
            cout << "Book found but not available." << endl;
        }
    }
}
void Library::displayBooks()
{
    booksHave[0] = {"rana", "saab", 76567, 1};
    booksHave[1] = {"dhiman", "bhau", 76427, 1};
    booksHave[2] = {"chandel", "brother", 35845, 0};

    for (int i = 0; i < 3; i++)
    {
        if (booksHave[i].isAvailable == 1)
        {
            cout << "Book " << i + 1 << " with title " << booksHave[i].title << " is available. " << endl;
        }
        else
        {
            cout << "Book " << i + 1 << " with title " << booksHave[i].title << " is not available. " << endl;
        }
    }
}

void Library::addBook()
{
    int n;
    cout << "Enter the number of books you want to add : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter book title for book " << i + 1 << " : ";
        cin >> booksHave[i].title;
        cout << "Enter book author for book : ";
        cin >> booksHave[i].author;
        cout << "Enter the ISBN for the book : ";
        cin >> booksHave[i].isbn;
        booksHave[i].isAvailable = 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\nThe book with title : " << booksHave[i].title << " added." << endl;
    }
}
void Library::displayMenu()
{
    cout << "<----------------Chose an option?---------------->" << endl;
    cout << "(1) Add a new book." << endl;
    cout << "(2) Search for a book by title." << endl;
    cout << "(3) Display all books." << endl;
    cout << "(4) Borrow a book." << endl;
    cout << "(5) Return a book." << endl;
    cout << "(6) Exit the library." << endl;
}
int main()
{
    Library user1;
    user1.bookSearch();

    int ch;
    cout << "\n\nPress any key to continue....";
    ch = getch();

    return 0;
}
