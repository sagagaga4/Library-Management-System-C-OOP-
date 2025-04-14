#include<iostream>
#include"book.h"
using namespace std;
void Book::displayInfo(){
    cout<<"Book Title: "<<Title<<endl;
    cout<<"Book Author: "<<Author<<endl;
    cout<<"Book ISBN: "<<ISBN<<endl;
    cout<<"Book available: "<<(Available ? "Yes":"No")<<endl;
}
