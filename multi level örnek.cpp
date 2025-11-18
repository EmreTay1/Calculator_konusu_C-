#include<iostream>
using namespace std;

class Person{
	
	protected:
		string name;
		int age;
	
	public:
		Person(string n,int b):name(n),age(b){
		}
		
		void bastir(){
			cout<<name<<" "<<age;
			
		}
		
};


class Employee:public Person{
	
	protected:
		int id;
	
	public:
		
		Employee(string n,int a,int i):Person(n,a),id(i){
		}
		
		void oz(){
			cout<<name<<" "<<age<< " "<<id;
			
		}
		
		
	
	
};


class Director:public Employee{
	protected:
		string department;
		
	public:
		Director(string n,int a,int i,string d):Employee(n,a,i),department(d){
		}
		
	
	int sifre_uretici(int  rakam){
		cout<<department<<endl;
		return age*id+rakam;
	}
		
		
	
	
};



int main(){
	
	Director d1("gadir",25,123555,"ODÝNE GENEL MÜDÜRÜ");
	
	cout<<"sifre:"<<d1.sifre_uretici(4545565454)<<endl;
	d1.oz();
	
}


