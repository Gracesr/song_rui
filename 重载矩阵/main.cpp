class Matrix
{
public:
    int x[3][3];
     Matrix& operator +=( Matrix &n)
     {
         int i,j;
         for (i=0;i<3;i++)
         for (j=0;j<3;j++)
         x[i] [j]+=n.x[i] [j];
         return * this;
    }
    Matrix& operator (Matrix n)
    {
        int i,j;
        for (i=0;i<3;i++)
        for (j=0;j<3;j++)
        x[i] [j]+=n.x[i] [j];
        return * this;
    }
    Matrix operator +( Matrix &n)
    {
       Matrix new1;
        int i,j;
        for (i=0;i<3;i++)
        for (j=0;j<3;j++)
        new1. x[i][j]= x[i][j]+n.x[i][j];
        return new1;
    }
    friend istream &operator >>(istream &in,Matrix&n);
    friend ostream &operator >>(ostream &out,Matrix&n);
};
istream &operator >>(istream & in,Matrix &n)
{
  int i,j;
  for (i=0;i<3;i++)
  for (j=0;j<3;j++)
   in>>n.x[i][j];
  return in;
}
ostream & operator <<(ostream &out,Matrix &n)
{
    int i,j;
  for (i=0;i<3;i++)
  {
    for (j=0;j<3;j++)
    out<<n.x[i][j]<<"";
    cout <<endl;
  }
   return out;
}
int main ()
{
  Matrix a1,a2,a3,a4;
  cin >>a1;
  cin >>a2;
  a4=a2;
  a3=(a1+a4) ;
  cout <<a1<<endl;
  cout <<a2<<endl;
  cout <<a3<<endl;
  return 0;
}

