#pragma once
#include<iostream>
#include<vector>
#include "book.h"
using namespace std;

class library{

  vector<Book>books;

public:
  
  library(){}
  void addBook(Book book); 
  void removeBook(string ISBN);
  void displayAllBooks();
  void borrowBook(string ISBN);
  void returnBook(string ISBN);

}; 
