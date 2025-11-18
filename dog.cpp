#include<iostream>

using namespace std;

class Animal{
	protected:
		string name;
	public:	
	void setname(string n){
		
		name=n;
	}
	
	
};


class Dog:public Animal{
	
	public:
		
		void hav(){
			
			cout<<name<<"  hav hav";
		}
	
	
};


int main(){
	Dog d;
	
	d.setname("karabas");
	d.hav();
	
}
