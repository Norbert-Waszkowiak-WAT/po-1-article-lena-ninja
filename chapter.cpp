#ifndef CHAPTER_H
#define CHAPTER_H
#include <iostream>
#include <string>
#include "article.cpp"
#include "author.cpp"
using namespace std;

class Chapter {
    private:
        string title;
        Author author;
        int chapterNumber;
     public:
        Chapter(): title(""), author(Author()), chapterNumber(1){};
        Chapter(string chapterTitle, Author chapterAuthor, int number)
            :title(chapterTitle), author(chapterAuthor), chapterNumber (number){};
        Chapter(Chapter &other):title(other.title), author(other.author), chapterNumber(other.chapterNumber){};
        Chapter (Article &article)
            :title(article.getTitle()), author (article.getAuthor()), chapterNumber(1){};
            void displayInfo(){
                cout<<"Chapter "<< chapterNumber<<": " <<title<<" by "<< author.getName()<<" "<<author.getSurname() << endl;
            };
            string getTitle(){
                return title;
            };
            Author getAuthor(){
                return author;
             };
             int getChapterNumber(){
                return chapterNumber;
             };
            

};
#endif