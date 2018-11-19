#include <iostream>

using namespace std;

int main()
{
  int a=0,b=200,c=0;
  cout <<"Enter hours worked ( -1 to end ):";
  cin >>a;
  while( a!=-1 )

  {
      c=a*0.09+b;
      cout <<"Salary is :"<<c<<endl;
      cout <<endl;
      cout <<"Enter hours worked ( -1 to end ):";
      cin >>a;
  }
      return 0;
}
