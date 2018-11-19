#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
   double x,y;
   cout <<fixed;
   for ( int loop =1;loop<=5;loop++)
   {
       cout <<"Enter a number:";
       cin >>x;
       y =floor ( x+0.5 );
       cout <<y<<endl;
    }
    return 0;
}
