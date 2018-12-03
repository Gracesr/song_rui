#include <iostream>

using namespace std;

int main()
{
  for ( unsigned int i=1;i<=5; i++)
  {

          for(unsigned int k=1;k<=i*2-1;k++ )
          cout <<'*';

      for ( unsigned int i=4;i>=1;i--)
      {
            for ( unsigned int k=1;k<=i*2-1;k++)
            cout <<'*';

      }
      cout <<endl;

  }

    cout<< endl;
}
