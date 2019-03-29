class Polynominal
{
public:
    Polynominal(){ head = 0;}
    Polynominal( const Polynominal & );
    ~Polynominal()
    {
        Node *q,*p;
        while ( p )
        {
            q = p->next;
            if(p)delete p;
            p = q;
        }
        head = NULL;
    }
    Node *get(int e );
    void set(double c,int e);
    void Create(double*c,int*e,int n);
    friend Polynominal operator+(Polynominal a,Polynominal b);
    friend Polynominal operator-(Polynominal a,Polynominal b);
    friend Polynominal operator*(Polynominal a,Polynominal b);
    friend ostream& operator<<(ostream&os,const Polynominal& a);
    Polynominal& operator = (Polynominal a);
    void Print(ostream& os = cout)const;
    void Copy(const Polynominal &a);
    void Addr(){cout<<"The chain head pointer is:"<<head<<endl;}
private:
    Node *head;
};
