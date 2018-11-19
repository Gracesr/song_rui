#include <iostream>

using namespace std;

int main()
{
    double a=0,b=0,c=0;
    cout <<"Enter side 1:";
    cin >>a;
    cout <<"Enter side 2:";
    cin >>b;
    cout <<"Enter side 3:";
    cin >>c;
    if ( a+b>c )
    {
        if( a+c>b )
        {
            if( b+c>a )
        cout << "These can be sides to a triangle."<<endl;
        }
    }
    else
        cout <<"These can not be sides to a triangle."<<endl;

    return 0;
}
