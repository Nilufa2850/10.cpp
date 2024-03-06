
/*Define a class Customer with cust_id, name , email , mobile as instance
member variables. Define non parameterised and parameterised constructors in the class.*/

#include<iostream>
#include<string.h>
using namespace std ;

class Customer
{
    private :
        int cust_id ;
        char name[30] ;
        char email[30] ;
        char ph[11] ;

    public :
        Customer (int id, char n[] , char mail[] , char mobile[] )
        {
            cust_id = id ;
            strcpy(name,n) ;
            strcpy(email,mail) ;
            strcpy(ph,mobile) ;
        }
        Customer ()
        {
            cout<<"Enter customer id , name , email , mobile no : "<<endl ;

            cin>>cust_id ;
            cin.ignore() ;
            cin.getline(name,30) ;
            cin.getline(email,30) ;
            cin.getline(ph,11) ;
        }

        void showData()
        {
            cout<<"ID - "<<cust_id<<endl ;
            cout<<"Name - "<<name <<endl ;
            cout<<"Email - "<<email<<endl ;

            cout<<"Ph - "<<ph <<endl ;
            
        }

        
};

int main ()
{
    Customer a ;
    a.showData() ;
    
    Customer b(2,"Nilufa Yasmin" , "nil@gmail.com" , "8274872850") ;
    b.showData() ;
    return 0 ;
}
