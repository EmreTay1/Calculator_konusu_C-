#include <iostream>
using namespace std;
class E_device{
	
	protected:
		int power;
		
	public:
		
		E_device(int a):power(a){
		}
		void showSpech(){
			cout<< power;
		}
};



class Phone:public E_device{
	
	protected:
		int batteryfile;
		
	public:
		
		Phone(int x,int y):E_device(x),batteryfile(y){
		}
	
		
		int Area(){
			
			return power* batteryfile;
		}
	
};



class Smartphone:public Phone{
	
	protected:
	 	int stroge;
	 	
	public:
		
		Smartphone(int x,int y,int z):Phone(x,y),stroge(z){
		}
		
		void tumu(){
			
			cout<<power<<endl<<batteryfile<<endl<<stroge;
		}
	
	
};



int main() {
	Smartphone sp1(85,15,32);
	cout<<sp1.Area();
	sp1.tumu();
	
}
