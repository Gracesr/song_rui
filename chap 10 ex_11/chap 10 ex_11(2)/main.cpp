#include <iostream.h>
#include <cstdlib>
#include <cmath>
#define MAXSIZE 15
struct Node
{
    int exp;
    double coef;
    Node *next;
};
void Polynominal::Copy(const Polynominal&a)
{
    Node*t,*s,*p;
    p=a.head;s=head=0;
    while(p)
    {
        t=new Node;
        if(head==0)ead=t;
        t->coef=p->coef;
        t->exp=p->exp;
        p=p->next;
        if(s)s-next=t;

        s=t;
    }
    if(s)s->next=0;
}
Polynominal::Polynominal(const Polynominal& a)
{
    Copy( a )
}
void Polynominal::Create(double*c,int*e,int n)
{
    if(n<1)
    cout<<"false:The number of terms to create a polynomial must be greater than zero";
    else
    {
        head=new Node;
        head->coef=c[0];
        head->exp=e[0];
        Node*q,*p=head;
        for(int i=1;i<n;i++)
        {
            q=new Node;
            q->coef=c[i];
            q->exp=e[i];
            p->next=q;
            p=q;
        }
        p->next=0;
    }
}
Node*Polynominal::get(int e)
{
    Node*p=head;
    while(p)
    {
        if(p->exp==e)
            return p;
        p=p->next;
    }
    return p;
}
void Polynominal::set(double c,int e)
{
    Node*q,*p,*t;
    t=new Node;
    t->coef=c;
    t->exp=e;
    if(head==0)
    {
        head=t;
        head->next=0;
        return;
    }
    if(e>head->exp)
    {
        t-next=head;
        head=t;
        return;
    }
    p=head;
    while (p && e<p->exp)
    {
        p=q;
        p=p=>next;
    }
    if(p)
    {
        t->next=p;
        q->next=t;
    }
    else
    {
        q-=next=t;
        t->next=0;
    }
}
Polynominal operator +(Polynominal a,Polynominal b)
{
    Polynominal temp;
    Node*p,*q,*s,*t;
    double x;
    s = new Node;
    temp.head=s;
    p = a.head;
    q = b.head;
    while (p&&q)
    {
        if(p->exp==q->exp)
        {
           x=p->coef+q->coef;
           if(x!=0.0)
           {
              t=new Node;
              t->exp=p->exp;
              t->coef=x;
              s->next=t;
              s=t;
           }
           p=p->next;
           q=q->next;
        }
        else
        {
            t=new Node;
             if(p->exp>q->exp)
             {
                 t->coef=p->coef;
                 t->exp=p->exp;
                 p=p->next;
             }
             else
             {
                  t->coef=q->coef;
                  t->exp=q->exp;
                   q=q->next;
             }
             s->next=t;
              s=t;
            }
        }
        if(q)p=q;
        while(p)
        {
            t=new Node;
              t->exp=p->exp;
              t->coef=p->coef;
              s->next=t;
              s=t;
              p=p->next;
        }
        s->next=0;
        s=temp.head;
        temp.head=s->next;
        delete s;
        return temp;
        }
Polynominal operator -(Polynominal a,Polynominal b)
{
    Polynominal temp;
    Node*p,*q,*s=0,*t;
    double x;
    s = new Node;
    temp.head=s;
    p = a.head;
    q = b.head;
    while (p&&q)
    {
        if(p->exp==q=->exp)
        {
            x=p->coef-q->coef;
            if(x!=0.0)
           {
              t=new Node;
              t->exp=p->exp;
              t->coef=x;
              s->next=t;
              s=t;
           }
           p=p->next;
           q=q->next;
        }
        else
        {
            t=new Node;
             if(p->exp>q->exp)
             {
                 t->coef=p->coef;
                 t->exp=p->exp;
                 p=p->next;
             }
             else
             {
                  t->coef=q->coef;
                  t->exp=q->exp;
                   q=q->next;
             }
             s->next=t;
              s=t;
            }
        }
        if(q)p=q;
        while(p)
        {
            t=new Node;
              t->exp=p->exp;
              t->coef=p->coef;
              s->next=t;
              s=t;
              p=p->next;
        }
        s->next=0;
        s=temp.head;
        temp.head=s->next;
        delete s;
        return temp;
        }
        Polynominal operator *(Polynominal a,Polynominal b)
        {
          Polynominal temp;
          Node *p,*q,*s;
          int e;double c;
          p=a.head;
          while(p)
          {
              q=b.head;
              while(q)
              {
                  c=p-coef*q->coef;
                  e=p->exp+q->exp;
                  s=temp.get(e);
                  if(s)
                    s->coef+=c;
                  else
                    temp.set(c,e);
                    q=q->next;
              }
              p=p->next;
          }
          return temp;
        }
        ostream& operator<<(ostream&os,const Polynominal& a)
        {
            a.Print(os);
            return os;
        }
        Polynominal&Polynominal::operator=(Polynominal a )
        {
            Node *s,*p;
            if(head)
            {
                p=head;
                while (p)
                {
                    s=p->next;
                    delete p;
                    p = s;
                }p->coef!=0.0
            }
            Copy (a);
            return *this;
        }
        void Polynominal::Print(ostream& os) const
        {
            Node*p;int e;
            if(head)
            {
                e=head->exp;
                os<<"f(x)="<<head->coef;
                if(e>1)os<<"x"<<e;
                if(e==1)os<<"x";
            }
            else
            {
                os <<"f(x)=0"<<emdl;
                return;
            }
            p=head->next;

            while(p)
            {
                e=p->exp;
                if(p->coef!=0.0)
                {
                    if(p->coef>0.0)os<<'+'<<p->coef;
                    else os<<p->coef;
                    if(e>1)os<<"x"<<e;
                    if(e==1)os<<"x";
                }
                p=p->next;
            }
            os<<endl;

        }



}

