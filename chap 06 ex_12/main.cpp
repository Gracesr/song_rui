#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double calculateCharges( double );

int main()
{
   double hour,currentCharge,first,charge,totalCharges=0,totalHours=0;
   cout <<fixed;
   cout <<"Enter the hours parked for 3 cars:";
   for ( int a=1;a<=3;a++ )
   {
       cin >>hour;
       totalHours+=hour;
       if ( first )
       {
           cout <<setw( 5 )<<"car"<<setw( 15 )<<"hours"<<setw( 15 )<<"charge";
       }
       currentCharge = calculateCharges( hour );
       totalCharges += currentCharge;
       cout <<setw( 3 )<<a<<setw( 17 )<<setprecision( 1 )<<hour<<setw( 14 )<<setprecision( 2 )<<currentCharge<<endl;
   }
    cout <<setw( 7 )<<"Total"<<setw( 13 )<<setprecision ( 2 )<<totalCharges<<endl;
}
double calculateCharges( double hours )
{
    double charges;
    if ( hours< 3 )
        charges =2;
    else
        charges =2+5*ceil ( hours - 3 );

     if ( charges >10 )
    cout <<10;
    else
     cout <<charges ;
     return 0;

}
