#include<iostream> 
#include<string>
#include"book.h"
#include"library.h"
using namespace std;

int main(){
  
  string ti_1 = "The Catcher In The Rye";
  string au_1 = "J.D. Salinger";
  string is_1 = "978-2-16-148410-0";
  bool av_1 = true;
 
  string ti_2 = "DUNE";
  string au_2 = "Frank Herbert";
  string is_2 = "342-3-16-165415-9";
  bool av_2 = true;   
  
  string ti_3 = "The Lord of the Rings";
  string au_3 = "J.R.R. Tolkein";
  string is_3 = "118-7-46-753310-9";
  bool av_3 = true;   
  
  Book A(ti_1,au_1,is_1,av_1);
  Book B(ti_2,au_2,is_2,av_2);
  Book C(ti_3,au_3,is_3,av_3);
  
  A.displayInfo();
  cout<<endl;
  B.displayInfo();
  cout<<endl;
  C.displayInfo();
  cout<<endl;
  library lib;
  lib.addBook(A);
  cout<<endl;
  lib.addBook(B);
  cout<<endl;
  lib.addBook(B);
  cout<<endl;
  lib.addBook(C);
  cout<<endl;
  lib.removeBook(is_2);
  cout<<endl;
  lib.displayAllBooks(); 
  lib.borrowBook(is_1); 
  cout<<endl;
  lib.displayAllBooks(); 
  lib.returnBook(is_1); 
  cout<<endl;
  lib.displayAllBooks(); 
  return 0;
}

