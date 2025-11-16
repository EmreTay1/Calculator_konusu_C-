#include<iostream>
#include<cmath>
#include<iomanip>
#include "basic.h"
using namespace std;
namespace Basic
{
   double add(const double a,const double b)
   {
      return a+b;
   }
   double subtract(const double a,const double b)
   {
      return a-b;
    }
    double division(const double a,const double b)
    {
        if(b==0)
        {
            cout<<"Division by zero\n";
            exit(1);
        }
        return a/b;
    }
    double multiply(const double a,const double b)
    {
       return a*b;
    }
    int remainder(const int a,const int b)
    {
        if(b==0)
        {
            cout<<"Division by zero\n";
            exit(1);
        }
        return a%b;
    }
}

