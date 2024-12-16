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
using namespace std;

struct Book
{
    string title;
    string author;
    int isbn;
};
int n;
void addBook(Book &b){
    cout << "Enter the title of book : ";
    getline(cin, b.title);
    cout << "Enter the Author of the book : ";
    getline(cin, b.author);
    cout << "Emter ISBN code : ";
    cin >> b.isbn;
}
void entryDisplay(){
    cout << "<----------------What do you want to do ?---------------->" << endl;
    cout << "(1) Add a new book." << endl;
    cout << "(2) Search for a book by title." << endl;
    cout << "(3) Display all books." << endl;
    cout << "(4) Borrow a book." << endl;
    cout << "(5) Return a book." << endl;
    cout << "(6) Exit the library." << endl;
    cin >> n;
}
void addBookFunc(){
    Book b;
    addBook(b);
    cout << "Your book with title " << b.title << " added" << endl;
    entryDisplay();
}

int main(){
    cout << "<----------------Welcome! To Our Library---------------->" << endl
         << endl;
    entryDisplay();

    if (n == 1){
        // Book b;
        // addBook(b);
        // cout << "Your book with title " << b.title << " added" << endl;
        // entryDisplay();
        addBookFunc();
    }
    else if (n == 6){
        cout << "Exiting!!!";
        return 0;
    }
    else{
        cout << "invalid Input";
    }

    return 0;
}
