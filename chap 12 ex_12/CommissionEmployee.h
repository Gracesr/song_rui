#ifndef COMMISSIONEMPLOYEE_H_INCLUDED
#define COMMISSIONEMPLOYEE_H_INCLUDED
#include <string>
#include "Employee.h"

class CommissionEmployee : public Employee
{
public:
   CommissionEmployee( const string &, const string &,
      const string &, int, int, int, double = 0.0, double = 0.0 );
      virtual ~CommissionEmployee() {}

   void setCommissionRate( double );
   double getCommissionRate() const;

   void setGrossSales( double );
   double getGrossSales() const;

   virtual double earnings() const;
   virtual void print() const;
private:
   double grossSales;
   double commissionRate;
};
#endif
