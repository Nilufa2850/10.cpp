/*Define a class Complex with instance variable for real and imaginary part of
a Complex number. Define only one parameterised constructor in the class to initialise
Coomplex object. Also define showData method in the class to display object data.
Now create an array of complex class with size 5 and display values of each object.*/

#include<iostream>
#include<string.h>
using namespace std ;

class Complex
{
    private :
        int real , img ;

    public :
        Complex (int r , int i)
        {   
            real = r ;
            img = i ;
        }       
        
        void showData()
        {
            cout<<"Real-"<<real<<" Imag-"<<img<<endl ;
        }
        
};

int main ()
{
    Complex c1(5,6) ;
    c1.showData() ;

    Complex ary[5]={Complex(10,20), Complex (15,16) , Complex (1,2) , Complex(9,8) , Complex (4,6) };

    for (int i=0 ; i<5 ; i++)
    {
        ary[i].showData() ;
        cout<<endl ;
    }
    return 0 ;
}
