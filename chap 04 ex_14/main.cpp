#include <iostream>
using namespace std;
int main()
{
    double a=0,b=0,c=0,d=0,e=0,f=0;
    while ( a!=-1 )
    {
        cout <<"Enter account number:";
        cin >>a;
        if (a==-1)
        {
            break;
        }
        cout <<"Enter beginning balance:";
        cin >>b;
        cout <<"Enter total charges:";
        cin >>c;
        cout <<"Enter total credits;";
        cin >>d;
        cout <<"Enter credit limit:";
        cin >>e;
        f=b+c-d;
        cout <<"New balance"<<f<<endl;
        if ( f>e)
        {
            cout <<"Credit Limit Exceeded."<<endl;
        }


    }
    return 0;
}



