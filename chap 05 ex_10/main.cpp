#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int factorial = 1;
   for ( int i=1;i<=5;i++ )
   {
       factorial*=i;
       cout <<i<<"!="<<factorial<<endl;
   }
    return 0 ;
}
