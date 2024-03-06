/*Define a class Time with hr, min, sec as instance members
variables. Define a constructor to initialise Time object.*/

#include<iostream>
using namespace std ;

class Time
{
    private :
        int hr,min,sec ;

        void normalization ()
        {
            min = min + sec/60 ;
            sec %= 60 ;
            hr = hr + min/60 ;
            min %=60 ;
        }

    public :
        Time ()
        {
            hr = 0 ;
            min = 0 ;
            sec = 0 ;
        }
        Time (int h, int m , int s)
        {
            hr = h ;
            min = m ;
            sec = s ;
        }
        void showData()
        {
            normalization() ;
            cout<<hr<<":"<<min<<":"<<sec<<endl ;
        }

        
};

int main ()
{
    Time t1 , t2(2,72,130) ;
    t1.showData() ;
    t2.showData() ;
    
    return 0 ;
}
