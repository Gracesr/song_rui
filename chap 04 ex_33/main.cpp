#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,c=0;
    cout <<"Enter side 1:";
    cin >>a;
    cout <<"Enter side 2:";
    cin >>b;
    cout <<"Enter side 3:";
    cin >>c;
    int A=a*a,B=b*b,C=c*c;
    if (( A+B==C ) || ( A+C==B )||( B+C==A ))
    {
        cout <<"These are the sides of a right triangle."<<endl;

    }
    else
        cout <<"These sides can not form a right triangle."<<endl;
    return 0;
}
