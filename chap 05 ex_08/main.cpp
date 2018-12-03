#include <iostream>

using namespace std;

int main()
{
   int counter,number,smallest;
   cout <<" Enter the counter of the number:";
   cin >>counter;
   cout <<"Enter the numbers:";
   for(int i=1;i<=counter;i++)
   {
       cin >>number;
       if (number<smallest )
        smallest=number;
   }
   cout << "The smallest number is" <<smallest<< endl;
}
