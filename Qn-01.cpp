
/*Define a class Cuboid with length, breadth and height as instance
member variables. Define constructors to initialise member variables.*/

#include<iostream>
using namespace std ;

class Cuboid
{
    private :
        int l , b , h ;
    public :
        Cuboid () {l=0 ; b=0 ; h=0 ; }
        Cuboid (int x, int y, int z)
        {
            l = x ;
            b = y ;
            h = z ;
        }
        void showData()
        {
            cout<<"Length="<<l<<" Breadth="<<b<<" Height="<<h<<endl ;
        }
};
int main ()
{
    Cuboid c1 , c2(2,5,6) , c3=Cuboid(7,2,1) ;

    c1.showData() ;
    c2.showData() ;
    c3.showData() ;

    return 0 ;
}
