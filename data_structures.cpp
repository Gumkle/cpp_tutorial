#include <iostream>
#include <cstring>

using namespace std;

// Defining a structure
struct Book {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

// structure can be passed to function as an argument like this:
void printBook( struct Book book);

void dataStructuresPresentation(){
    struct Book Book1;

    strcpy(Book1.title, "Learn C++ Programming");
    strcpy(Book1.author, "Chand Miyan");
    strcpy(Book1.subject, "C++ Programming");
    Book1.book_id = 123456;

    printBook(Book1);

    //you can define pointers to stucture
    struct Book *struct_pointer;
    struct_pointer = &Book1;

    //you can access member of structure by pointer with -> operator
    cout << struct_pointer->subject << endl;

    // typedef
}

void printBook(struct Book book){
    cout << "Book title: " << book.title << endl;
    cout << "Book author: " << book.author << endl;
    cout << "Book subject: " << book.subject << endl;
    cout << "Book id: " << book.book_id << endl;
}