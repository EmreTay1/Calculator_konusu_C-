#include<iostream>

using namespace std;

//Create a struct Car with make, model, year, and a display() function.

/*struct Car{
	
	//kurucu method yok
	string model;
	int year;
	
	void display(){
		
		cout<<model<<" "<<year;
	}
	
	
	
};*/

struct Car1{
	
	//kurucu method var
	string model;
	int year;
	
	/*Car1(string x,int y){
	model=x;
	year=y;
	cout<<"olusturldu";
	
	}*/
	
	Car1(){}
	void display(){
		
		cout<<model<<" "<<year;
	}
	
	void setter_name(string name){
		model=name;
		
	}
	
	void setter_year(int y){
		year=y;
		
	}
	
	~Car1(){
	}
	
};

/*class Car{
	
	private:
		
		string model;
		int year;
		
	public:
		
	void display(){
		
		cout<<model<<" "<<year;
	}
	
	
	Car(string x,int y){
		model=x;
		year=y;
	}
	
	
	//getter method
	
	string getter_model(){
		
		return model;
	}
	
	// setter method
	void setter_year(int y){
		
		year=y;
		
	}
	
	
	~Car(){
		
		cout<<"yok edildi";
	}
	
	
	
	
};

*/
int main(){
	
	Car1 c1;
	c1.setter_name("bmw");
	c1.setter_year(2019);
	c1.display();
	
	
	/*Car c1("BMW",2019);
	c1.display();
	cout<< endl<<c1.getter_model()<<endl;
	c1.setter_year(2020);
	c1.display();*/
}
