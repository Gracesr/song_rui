#include <iostream>

using namespace std;

int main()
{
    int counter=0,b=0,c=0;
    cin >>counter ;
    while ( counter <= 10 )
    {
        cin >>b;
        if ( b>c )
            c=b;
        else
            c=c;
        cout <<"The largest is:"<<c<<endl;
        cout <<endl;
        cin >>counter;
    }
    return 0;
}
