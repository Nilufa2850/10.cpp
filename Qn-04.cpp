/*Define a class Book with bookid,title,price as instance members
variables. Define non parameterised and parameterised constructor. */

#include<iostream>
#include<string.h>
using namespace std ;

class Book
{
    private :
        int id ;
        char title[30] ;
        float price ;

    public :
        Book ()
        {
            id = 1 ;
            strcpy(title , "Python") ;
            price = 550.00f ;
        }
        Book (int i, char name[] , float p)
        {
            id = i ;
            strcpy(title,name) ;
            price = p ;
        }
        void showData()
        {
            cout<<"Book id - "<<id<<endl ;
            cout<<"Ttile - "<<title<<endl ;
            cout<<"Price - "<<price<<endl ;
        }

        
};

int main ()
{
    Book b1 , b2 = Book(2,"Java",600.50) ;
    
    b1.showData() ;
  
    b2.showData() ;
    return 0 ;
}
