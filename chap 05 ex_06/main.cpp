#include <iostream>

using namespace std;

int main()
{
   unsigned int last,average,total,number,counter;
   cout <<"Enter the last:";
   cin >>last;
   for (int number;number != last;++number  )
   {
        cout <<"Enter the number:";
        cin >>number;
        total += number;
        average =total/counter;

   }
    cout <<"The total is:";
    cin >>total;
    cout << "The average is:" <<average<< endl;
    return 0;
}
