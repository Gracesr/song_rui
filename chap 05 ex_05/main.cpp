#include <iostream>

using namespace std;

int main()
{
   int total = 0,number,counter;
   cout <<"Enter the counter of the number:";
   cin >>counter;

   for ( int i =1;i<=counter;i++ )
   {
        cout <<"Enter the number:";
        cin >>number;

      total +=number;

   }
    cout << "The sum is " <<total<< endl;
    return 0;
}
