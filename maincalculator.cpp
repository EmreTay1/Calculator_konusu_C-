#include<iostream>
#include<cmath>
#include<iomanip>
#include "basic.h"
#include "advanced.h"
#include "utils.h"
using namespace std;
void testCalculator()
{
    int choice;
    double a,b;
    int c,d;
    do
    {
       choice=Utils::menu();
       switch(choice)
       {
           case 1:
              cout<<"Enter two values:";
              cin>>a>>b;
              cout<<"Result:"<<Basic::add(a,b)<<endl;
              Utils::seperator();
              break;
          case 2:
              cout<<"Enter two values:";
              cin>>a>>b;
              cout<<"Result:"<<Basic::subtract(a,b)<<endl;
              Utils::seperator();
              break;
          case 3:
              cout<<"Enter two values:";
              cin>>a>>b;
              cout<<"Result:"<<Basic::multiply(a,b)<<endl;
              Utils::seperator();
              break;
          case 4:
              cout<<"Enter two values:";
              cin>>a>>b;
              cout<<"Result:"<<Basic::division(a,b)<<endl;
              Utils::seperator();
              break;  
           case 5:
              cout<<"Enter two integer values:";
              cin>>c>>d;
              cout<<"Result:"<<Basic::remainder(c,d)<<endl;
              Utils::seperator();
              break;
           case 6:
              cout<<"Enter two values:";
              cin>>a>>b;
              cout<<"Result:"<<Advanced::power(a,b)<<endl;
              Utils::seperator();
              break;
          case 7:
              cout<<"Enter a value:";
              cin>>a;
              cout<<"Result:"<<Advanced::sqrroot(a)<<endl;
              Utils::seperator();
              break;
          default:
              break;
      }
   }while (choice!=8);
  return;
}
    
int main()
  {
      testCalculator();
      return 0;
  }
   
  
