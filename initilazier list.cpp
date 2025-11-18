#include<iostream>

using namespace std;

class Car{
	
	private:
		const int year;
		const string brand;
		const int id;
	
	public:
		
	
		
		//Not:Paramatre listesi AYNI OLAMAYCAK DÝÐERLERÝYLE,const için daha deðerli const bloklarýn içine giremiyor.
		Car(int a,string b,int c):year(a),brand(b),id(c){
			cout<<"sadece bunun için id getirdik sebebi parametre ayný olmasýn diye overloading aykýrý\n";
			cout<<"initilazier list ile contructor calisti\n";
			
		}			
		
		void ekrana_bastir1(){
			
			cout<<"year:"<<year<<endl<<"brand:"<<brand<<endl<<"id:"<<id<<endl;
		}
		
		
		~Car(){
			cout<<"destructor\n";
		}
			
		
		
};



int main(){
	
	Car c4(2020,"hyundai",5);
	c4.ekrana_bastir1();
}
