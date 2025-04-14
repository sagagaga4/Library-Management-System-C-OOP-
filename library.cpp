#include<iostream>
#include"book.h"
#include"library.h"
using namespace std;

void library::addBook(Book book){
  for (const Book& b : books) {//Book values can't be changed, b is reference for one Book in all Books vector
    if (b.getISBN() == book.getISBN()) {//If Book is alredy in the library
      cout << "Error! Book ISBN " << book.getISBN() << " already exists!" << endl;
      return;
    }
  }
  books.push_back(book);//The Book object book is added to the end of the books vector
  cout << "Book Titled: "<<book.getTitle()<<" was added successfully!" << endl;
}

void library::removeBook(string ISBN){
  if(ISBN.empty()){
    cout<<"INPUT ERROR\n"<<endl;
    return;
  }
  for (int i = 0; i < books.size(); i++ ) { 
    if (ISBN  == books[i].getISBN()) {//If ISBN is in the library
      books[i] = books[books.size() - 1]; 
      books.pop_back();
      cout<<"Book ISBN: "<<ISBN<<" was removed successfully"<<endl;
      return;
    }
  }
  cout << "Error! Book ISBN " << ISBN << " does not exists!" << endl;
}

void library::displayAllBooks(){
  for(int i = 0; i < books.size(); i++){
    books[i].displayInfo();//Calls the book.h function to display books info
    cout<<endl;
  }
  return;
}

void library::borrowBook(string ISBN){
  char c;
  for(int i = 0; i < books.size(); i++){
    if (ISBN  == books[i].getISBN()) {//If ISBN is in the library
      cout<<"Book ISBN: "<<ISBN<<"is available and can be borrwed"<<endl;

      while(c != 'Y' && c != 'N') 
      {
        cout<<"Continue(Y/N): "<<endl;
        cin>>c;
      }
      if(c == 'Y'){
        books[i] = books[books.size() - 1];
        books[i].setAvailable(false);
        cout<<"Book ISBN: "<<ISBN<<" was borrowed successfully"<<endl;
        return;     
      }
      if(c == 'N'){
        cout<<"Coward XD"<<endl;
        return; 
      }
    }
    cout << "Error! Book ISBN " << ISBN << " does not exists!" << endl;
  }
}

void library::returnBook(string ISBN){
  for(int i = 0; i < books.size(); i++){
    if (ISBN != books[i].getISBN()) {//If ISBN is in the library
      books[i].setAvailable(true);
      cout<<"Book ISBN: "<<ISBN<<" has been returned! :)"<<endl;
    }
  }

  cout<<"ERROR! Book ISBN: "<<ISBN<<"is already in library"<<endl;
  return;
}
