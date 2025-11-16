#include<iostream>
#include<cmath>
#include<iomanip>
#include "utils.h"
using namespace std;
namespace Utils
{
     int menu()
     {
         int choice;
         do 
         {
           cout<<"------Menu-------\n";
           cout<<"1. Addition\n";
           cout<<"2. Subtraction\n";
           cout<<"3. Multiplication\n";
           cout<<"4. Division\n";
           cout<<"5. Remainder\n";
           cout<<"6. Power\n";
           cout<<"7. Square Root\n";
           cout<<"8. Exit\n";
           cout<<"\nYour Choice:";
           cin>>choice;
           if(choice<1 || choice >8) cout<<"\nInvalid entry... Please try again\n";
        }while(choice<1 || choice >8);
        return choice;
    }
    void seperator()
    {
          cout<<"-------------------------------\n";
    }
}

