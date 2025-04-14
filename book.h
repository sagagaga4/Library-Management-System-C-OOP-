#pragma once
#include<iostream>
#include<string>
using namespace std;

class Book{

    string Title;
    string Author; 
    string ISBN;
    bool Available;

    public:
    Book(string title, string author, string isbn,bool available){
        Title = title;
        Author = author;
        ISBN = isbn;
        Available = available;
    };

    string getTitle() const{
        return Title;
    }

    string getAuthor() const{
        return Author;
    }

    string getISBN() const{
        return ISBN;
    }

    bool getAvailable() const{
        return Available;
    }

    void setTitle(string t){
        Title = t;
    }

    void setAuthor(string a){
        Author = a;
    }

    void setISBN(string i){
        ISBN = i;
    }
   
    void setAvailable(bool a) {
        Available = a;
    }
    
    void displayInfo();
};



