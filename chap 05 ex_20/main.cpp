#include <iostream>

using namespace std;

int main()
{
  int counter=0;
  long int side1,side2,hyp;
  cout <<side1 <<'\t'<<side2<<'\t'<<hyp<<'\n';
  for ( long int side1=1;side1<=500;side1++ )
  {
      for ( long int side2=1;side2<=500;side2++)
      {
          for ( long int hyp=1;hyp<=500;hyp++)
          {
              if ( hyp*hyp==side1*side1+side2*side2 )
              {
              cout <<side1<<'\t'<<side2<<'\t'<<hyp<<'\n';
              counter++;
              }

          }
      }
  }
  cout << " The total of "<< cout <<" triples were found"<<endl;
}
