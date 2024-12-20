/*Question:
The program should provide a menu with the following options:

Add a new book.
Search for a book by title.
Display all books.
Borrow a book (mark as unavailable).
Return a book (mark as available).
Exit the program.
Use an array (or dynamic array) to store the books and allow the user to perform these operations interactively.
Tips:
Use a loop to keep displaying the menu until the user chooses to exit.
Functions for each operation will make the program modular and organized.
Use string comparisons for the search functionality.
Validate actions like borrowing or returning to ensure books can't be borrowed if already unavailable or returned if already available.
*/

#include <iostream>
#include<string>

using namespace std;

typedef struct Book
{
    string title;
    string author;
    int isbn;
} b;
int n; // Global varable

int main()
{
    cout << "<----------------Welcome! To My Library---------------->" << endl
         << endl;
    entryDisplay();

    switch (n)
    {
    case 1:
        addBookFunc();
        entryDisplay();
        break;
    case 2:
        bookSearch();
        entryDisplay();
        break;
    case 3:
        booksStored();
        entryDisplay();
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
    entryDisplay();
}
void booksStored()
{
    Book *bookshave = new Book[10];

    bookshave[0] = {"rana", "saab", 76567};
    bookshave[1] = {"dhiman", "bhau", 76427};
    bookshave[2] = {"chandel", "brother", 35845};

    cout << endl
         << "We have following books in our library" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Book " << i + 1 << " : Title - " << bookshave[i].title << endl;
    }

    delete[] bookshave;
}
void bookSearch()
{
    string title;

    cout << "Enter the title of book : ";
    cin >> title;
}
