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
    void borrowBook();
};
void Library::borrowBook()
{
    displayBooks();
    int choice;
    cout << "\nWhich one do you want : ";
    cin >> choice;

    for (int i = 0; i < choice; i++)
    {
        if (choice == i + 1)
        {
            if (booksHave[i].isAvailable == 1)
            {
                cout << "Book is available and issued to you." << endl;
                cout << "Here is your book......." << endl;
                exit(0);
            }
            else
            {
                cout << "Book is unavailable at this time!" << endl;
                exit(0);
            }
        }
    }
}
void Library::bookSearch() // Not working
{
    string t;
    cout << "Enter the title of the book you are looking for : ";
    getline(cin, t);

    bool found = false;
    for (int i = 0; i < 3; i++)
    {
        if (booksHave[i].title == t)
        {
            cout << "Your book with name " << booksHave[i].title << " is found .";
            found = true;
        }
    }
    if (!found)
    {
        cout << "The book with title '" << t << "' not found" << endl;
    }
}
void Library::displayBooks()
{
    booksHave[0] = {"rana", "saab", 76567, 1};
    booksHave[1] = {"dhiman", "bhau", 76427, 0};
    booksHave[2] = {"chandel", "brother", 723, 1};
    booksHave[3] = {"sahil", "bhai", 35845, 0};

    cout << "We have following books in our library:--" << endl
         << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "Book " << i + 1 << " : with title '" << booksHave[i].title << "'" << endl;
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
        cout << "\nThe book with title '" << booksHave[i].title << "' added." << endl;
    }
    exit(0);
}
void Library::displayMenu()
{
    cout << "<----------------Chose an option?---------------->" << endl;
    cout << "(1) Add a new book." << endl;
    cout << "(2) Display all books." << endl;
    cout << "(3) Search for a book by title." << endl;
    cout << "(4) Borrow a book." << endl;
    cout << "(5) Return a book." << endl;
    cout << "(6) Exit the library." << endl;
    cout << "Enter Choice : ";
}
int main()
{
    int choice;

    Library user1;
    user1.displayMenu();
    cin >> choice;
    do
    {
        switch (choice)
        {
        case 1:
            user1.addBook();
            break;
        case 2:
            user1.displayBooks();
            break;
        case 4:
            user1.borrowBook();
            break;
        case 6:
            cout << "Exiting...!";
            return 0;

        default:
            cout << "Invaild Input";
            break;
        }
    } while (choice != 6);

    int ch;
    cout << "Press any key to continue.....";
    ch = getch();

    return 0;
}
