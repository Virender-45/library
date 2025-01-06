# Library Management System

This C++ program implements a **Library Management System** that allows users to manage books and interact with the library through a menu-driven interface. It supports common library operations like adding books, displaying the collection, searching for specific titles, borrowing, and returning books. 

## Features

1. **Add Books**: 
   - Users can add new books to the library by specifying the title, author, and ISBN.
   - Newly added books are marked as available for borrowing.

2. **Display Books**: 
   - Lists all the books in the library, showing the title, author, and availability status.

3. **Search Books**: 
   - Allows users to search for a book by its title. 
   - Displays whether the book is found in the collection.

4. **Borrow Books**: 
   - Users can borrow books if they are available. 
   - Marks the borrowed book as unavailable until returned.

5. **Return Books**: 
   - Users can return previously borrowed books, making them available for others.

6. **Menu Interface**:
   - Offers an intuitive menu for selecting operations, ensuring ease of use.

## Initial Setup

The library starts with a predefined collection of four books:
1. `"rana"` by `saab` (Available)
2. `"dhiman"` by `bhau` (Unavailable)
3. `"chandel"` by `brother` (Available)
4. `"sahil"` by `bhai` (Unavailable)

## Usage

Run the program to interact with the library system. Use the menu to select operations:

1. Add a new book.
2. Display all books.
3. Search for a book by title.
4. Borrow a book.
5. Return a book.
6. Exit the library.

### Example Workflow
1. Start the program and view the main menu.
2. Add a new book to expand the library collection.
3. Search for a specific book by its title.
4. Borrow an available book or return a borrowed book.
5. Exit the program when done.

## How to Compile and Run

1. Save the code to a file, e.g., `library.cpp`.
2. Compile the program using a C++ compiler:
   ```bash
   g++ -o library library.cpp
