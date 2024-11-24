#ifndef BOOK
#define BOOK
#include <iostream>
#include <string>
#include "chapter.cpp"
#include "author.cpp"
using namespace std;
class Book(
    private:
    string title;
    Author author;
    int policationYear;
    vector<Chapter> chapter;

    public:
        Book(): title(""), author(Author()), policationYear(0), chapte(){};
        Book(string bookTitle, Author bookAuthor, int year, vector<Chapter> bookChapters)
        : title(bookTitle), author(bookAuthor), publicationYear(year), chapter
);
#endif