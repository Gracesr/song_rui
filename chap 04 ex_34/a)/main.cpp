#include <iostream>
using namespace std;

int main()
{
    int number,factorial=1;
    cout <<"Enter a positive integer:";
    cin >>number;
    cout <<number<<"! is ";
    while ( number > 0 )
    {
        factorial*=number;
        number--;
    }
     cout << factorial<< endl;

    return 0;
}
