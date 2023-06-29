# MyLib
Library Management Program

This project is a basic implementation of a library management system in C++. It enables users and administrators to manage the issuing, depositing, creating, searching, and removing of books.

## Features
- Book Creation: Allows users to create a new book record with details like the book's name, author's name, and year of publication.
- Book Display: Users can display the details of any book, including its name, author, and the year it was published.
- Book Modification: Provides the ability to update the details of a specific book.
- Book Issuance and Deposit: Tracks which student has borrowed which book, handling the issuing and depositing process.
- Book Search: Users can search for a book by name.
- Book Removal: Allows for the removal of a book from the system.
- Admin Menu: The administrator can view the issue history, deposit history, search for a book, add a new book, and remove a book.

## Getting Started

### Pre-requisites
Make sure you have a C++ compiler. If not, you can download one (like GCC or MinGW if you're using Windows).

### Compilation
Open your terminal and navigate to the project directory. Run the following command to compile the program:

```
g++ main.cpp -o main
```
### Execution

```
./main
```

## Challenges and Learnings
1. Memory Management: Using arrays helped manage the list of books, though it limits the number of books that can be handled to the array's size.
2. Search Functionality: Implementing the search function required an understanding of string handling and array manipulation in C++.
3. Data Persistence: The current version of the program does not support data persistence.
4. User Interface and Error Handling: Creating an intuitive and error-free user interface in a console application was a challenge. Proper user prompts and correct handling of user input were prioritized.
5. Structuring the Code: The code is organized into two classes, Book and Admin, representing different entities in the library system, which helped maintain a clean and manageable codebase

## Contributing
Contributions are welcome. Please create a new issue if you have any feedback, suggestions, or want to request a new feature.
