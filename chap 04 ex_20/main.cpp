#include <iostream>

using namespace std;

int main()
{
  int passes =0,failures=0,studentCounter=1,result;
  while ( student number <=10 )
  {
      cout <<"Enter result ( 1=pass,2=fail):";
      cin >>result;
      if ( result ==1 )

          passes=passes+1;
          studentCounter =studentCounter +1;
       else
        if( result ==2 )
       {
           failures =failures +1;
           studentCounter =studentCounter +1;

       }
       else
       {
           cout <<"can not be inputed"<<endl;
       }

  }
    cout << "passed" <<passes<<"failed"<<failures<< endl;
    return 0;
}
