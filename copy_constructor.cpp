#include<iostream>
using namespace std;

class Araba{
	
	public:
		string name;
		int age;
		
	Araba(){
	}
	
	Araba(string n,int a){
		
		name=n;
		age=a;
		
	}
	
	Araba(Araba &c ){
		c.name=name;
		c.age=age;
		
	}
	
	void bastir(){
		cout<<name<<endl<<age<<endl;
	}
	
};



int main() {
	
	Araba a1("bmw",2019);
	a1.bastir();
	Araba a2;
	a2=a1;
	
	a2.bastir();
	
	
	
	
	
}
