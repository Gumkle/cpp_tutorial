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

void dataStructuresPresentation(){
    struct Book Book1;

    strcpy(Book1.title, "Learn C++ Programming");
    strcpy(Book1.author, "Chand Miyan");
    strcpy(Book1.subject, "C++ Programming");
    Book1.book_id = 123456;

    cout << Book1.book_id << endl;
}