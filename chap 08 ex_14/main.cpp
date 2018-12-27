#include <iostream>
using namespace std;
int mystery2( const char * );
int main()
{
   char string1 [ 80 ];
   cout <<"Enter a string:";
   cin >>string 1;
   cout << mystery2 ( string 1 )<<endl;
}
int mystery2( const char * s)
{
    unsigned int x;
    for ( x=0;*s != '\0';++s )
        ++x;
    return x;
}
