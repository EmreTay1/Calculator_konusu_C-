#include<iostream>
using namespace std;

class Vehicle{
	
	protected:
		int km;
		string yakit;
		int tekerlek_Adet;
		
	public:
		Vehicle(int k,string y,int a){
			km=k;
			yakit=y;
			tekerlek_Adet=a;
			
		}
		
	void show(){
		
		cout<<km<<" "<<yakit<<" "<<" "<<tekerlek_Adet;
	}
};


class Car:public Vehicle{
	protected:	
	string marka;
	public:
		
		Car(int k,string y,int a,string s):Vehicle(k,y,a),marka(s){
		}
		
	void show(){
		
		Vehicle::show();
		cout<<" "<<marka;
	}
};	

class Motor:public Vehicle{
	protected:	
	string renk;
	public:
		
		Motor(int k,string y,int a,string s):Vehicle(k,y,a),renk(s){
		}
		
	void show_motor(){
		
		show();
		cout<<" "<<renk;
	}
};	







int main(){
	
	Car c1(1000000,"lpg",4,"bmw");
	c1.show();
	Motor m1(50000,"benzin",2,"red");
	m1.show_motor();
	
	
	
	
	
}

		
