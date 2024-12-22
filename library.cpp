#include <iostream>

using namespace std;

void entryDisplay();
void addBook(Book &b);
void addBookFunc();
void booksStored();
void bookSearch();

typedef struct Book
{
    string title;
    string author;
    int isbn;
} b;
// Global varables
int n;
Book *bookshave = new Book[10];

int main()
{
    cout << "<----------------Welcome! To My Library---------------->" << endl
         << endl;
    entryDisplay();

    bookshave[0] = {"rana", "saab", 76567};
    bookshave[1] = {"dhiman", "bhau", 76427};
    bookshave[2] = {"chandel", "brother", 35845};

    switch (n)
    {
    case 1:
        addBookFunc();
        break;
    case 2:
        bookSearch();
        break;
    case 3:
        booksStored();
        break;
    case 4:
        // borrowBook();
        break;
    case 5:
        // returBook();
        break;
    case 6:
        return 0;

    default:
        cout << "Invalid Input! Exiting!!!" << endl;
        break;
    }

    return 0;
}
void entryDisplay()
{
    cout << "<----------------Chose an option?---------------->" << endl;
    cout << "(1) Add a new book." << endl;
    cout << "(2) Search for a book by title." << endl;
    cout << "(3) Display all books." << endl;
    cout << "(4) Borrow a book." << endl;
    cout << "(5) Return a book." << endl;
    cout << "(6) Exit the library." << endl;
    cin >> n;
}

void addBook(Book &b)
{
    cout << "Enter the title of book : ";
    cin >> b.title;
    cout << "Enter the Author of the book : ";
    cin >> b.author;
    cout << "Emter ISBN code : ";
    cin >> b.isbn;
}
void addBookFunc()
{
    Book newBook;
    addBook(newBook);
    cout << endl
         << endl
         << "Your book with title " << newBook.title << " added" << endl
         << endl;
    return entryDisplay();
}
void booksStored()
{

    cout << endl
         << "We have following books in our library" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Book " << i + 1 << " : Title - " << bookshave[i].title << endl;
    }

    delete[] bookshave;
    return entryDisplay();
}
void bookSearch()
{
    string title;

    cout << "Enter the title of book : ";
    cin >> title;

    bool found = false;
    for (int i = 0; i < 3; i++)
    {
        if (bookshave[i].title == title)
        {
            cout << "The book with title : " << bookshave[i].title << " is found .";
        }
        else
        {
            cout << "Book not found ";
            entryDisplay();
        }
    }

    return entryDisplay();
}
