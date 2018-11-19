#include <iostream>
using namespace std;
int main()
{
   double a=0,b=0,c=0,d=0,e=0,f=0;
   while ( a!=-1 )
   {
       cout <<"Enter miles driven ( -1 to quit ):";
       cin >>a;
       if ( a==-1 )
       {
           break;
       }
       cout <<"Enter gallons used:";
       cin >>b;
       c=a/b;
       cout <<"MGP this trip:"<<c<<endl;
       e=e+a;
       f=f+b;
       d=e/f;
       cout <<"Total MGP:"<<d<<endl;
   }
    return 0;
}
