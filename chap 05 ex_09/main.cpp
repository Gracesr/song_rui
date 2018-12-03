#include <iostream>

using namespace std;

int main()
{
   int total=1;
   for( int i=1;i<=15;i+=2 )
   {
     total *=i;
   }

   cout << "the total is" <<total<< endl;
    return 0;
}
