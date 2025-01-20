#include <iostream>

using namespace std;

class Library {
public:
    struct Book {
        string title;
        string author;
        int isbn;
        bool isAvailable = 1;
    };
    Book booksHave[100];
    int totalBooks;
   Library(); //Constructor for initializing pre-defined books
    
    void displayMenu();
    void addBook();
    void displayBooks();
    void borrowBook();
    void bookSearch();
    void returnBook();
};
Library::Library() {
    booksHave[0] = { "rana", "saab", 76567, 1 };
    booksHave[1] = { "dhiman", "bhau", 76427, 0 };
    booksHave[2] = { "chandel", "brother", 723, 1 };
    booksHave[3] = { "sahil", "bhai", 35845, 0 };
    totalBooks = 4;
}
void Library::returnBook() {
    cin.ignore();
    int r;
    displayBooks();
    cout << "Which book do you want to return: ";
    cin>>r;
    
    if(r >= 1 && r <= totalBooks){
        if(booksHave[r+1].isAvailable == 0){
        cout<<"Book with title '"<<booksHave[r+1].title<<"' is returned successfully."<<endl;
    }else{
        cout<<"Book is already available"<<endl;
    }
}
}
void Library::bookSearch() {
    cin.ignore();

    string t;
    cout << "Enter the title of the book you are looking for : ";
    getline(cin, t);

    bool found = false;
    for (int i = 0; i < totalBooks; i++) {
        if (booksHave[i].title == t) {
            cout << "Your book with name " << booksHave[i].title << " is found ."<<endl;
            found = true;
        }
    }
    if (!found) {
        cout << "The book with title '" << t << "' not found" << endl;
    }
}
void Library::displayBooks() {
    cout << "We have following books in our library:--" << endl
        << endl;

    for (int i = 0; i < totalBooks; i++) {
        cout << "Book " << i + 1 << ": '" << booksHave[i].title
            << "' by " << booksHave[i].author
            << " (Available: " << (booksHave[i].isAvailable ? "Yes" : "No") << ")" << endl;
    }
}
void Library::borrowBook()
{
    displayBooks();
    int choice;
    cout << "\nWhich book number do you want to borrow: ";
    cin >> choice;

    if (choice >= 1 && choice <= 4) {
        if (booksHave[choice - 1].isAvailable) {
            cout << "Book is available and issued to you." << endl;
            cout << "Here is your book: " << booksHave[choice - 1].title << endl;
        }
        else {
            cout << "Book is unavailable at this time!" << endl;
        }
    }
    else {
        cout << "Invalid book number selected! Exiting..to Main Menu" << endl;
    }
}

void Library::addBook() {
    int n;
    cout << "Enter the number of books you want to add : ";
    cin >> n;

    for (int i = totalBooks; i < totalBooks + n; i++) {

        cout << "\nEnter book title for book " << i + 1 << " : ";
        cin >> booksHave[i].title;
        cout << "Enter book author for book : ";
        cin >> booksHave[i].author;
        cout << "Enter the ISBN for the book : ";
        cin >> booksHave[i].isbn;
        booksHave[i].isAvailable = true;
        cin.ignore();    //Clear input buffer
        cout<<"Book with title '"<<booksHave[i].title<<"' is added"<<endl;
    }
    totalBooks += n;
}
void Library::displayMenu() {

    cout << "<----------------Chose an option?---------------->" << endl;
    cout << "(1) Add new book." << endl;
    cout << "(2) Display all books." << endl;
    cout << "(3) Search for a book by title." << endl;
    cout << "(4) Borrow a book." << endl;
    cout << "(5) Return a book." << endl;
    cout << "(6) Exit the library." << endl;
    cout << "Enter Choice : ";
}
int main() {
    int choice;
   
    
    Library user1;
    do {
        user1.displayMenu();
        cin >> choice;
        switch (choice) {
        case 1:
            user1.addBook();
            break;
        case 2:
            user1.displayBooks();
            break;
        case 3:
            user1.bookSearch();
            break;
        case 4:
            user1.borrowBook();
            break;
        case 5:
            user1.returnBook();
            break;
        case 6:
            cout << "Exiting...!";
            break;
        default:
            cout << "Invaild Input";
            break;
        }
    } while (choice != 6);

    return 0;
}
