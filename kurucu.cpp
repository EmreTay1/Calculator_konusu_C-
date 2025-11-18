#include<iostream>

using namespace std;

class Car{
	
	private:
		int year;
		string brand;
		int id;
	
	public:
		
		Car(){
			year=1999;
			brand="tofas";
			cout<<"default contructor calisti\n";
			
		}
		
		Car(int a,string b){
			year=a;
			brand=b;
			cout<<"parametreli contructor calisti\n";
			
		}
		
		
		Car(const Car &obj){
			year=obj.year;
			brand=obj.brand;
			cout<<"copy kurucu calisti\n";
			
		}
		
		//Not:Paramatre listesi AYNI OLAMAYCAK DİĞERLERİYLE
		Car(int a,string b,int c):year(a),brand(b),id(c){
			cout<<"sadece bunun için id getirdik sebebi parametre aynı olmasın diye overloading aykırı\n";
			cout<<"initilazier list ile contructor calisti\n";
			
		}			
		
		
		
		
		
		void ekrana_bastir(){
			
			cout<<"year:"<<year<<endl<<"brand:"<<brand<<endl;
		}
		
		void ekrana_bastir1(){
			
			cout<<"year:"<<year<<endl<<"brand:"<<brand<<endl<<"id:"<<id<<endl;
		}
		
		
		~Car(){
			cout<<"destructor\n";
		}
			
		
		
};



int main(){
	Car c1;
	c1.ekrana_bastir();
	Car c2(2001,"bmw");
	c2.ekrana_bastir();
	Car c3=c2;
	c3.ekrana_bastir();
	Car c4(2020,"hyundai",5);
	c4.ekrana_bastir1();
}
