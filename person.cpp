#include<iostream>

using namespace std;

class Person{
	public:
		string name;
		int age;
		
	void bastir(){
		
		cout<<name<<" "<<age<<endl;
	}
		
	
};


class Student:public Person{
	
	public:
		int id;
		
	void bastir(){
		Person::bastir();
		cout<<id;
	}
	
};



int main(){
	Student s1;
	s1.age=20;
	s1.name="emre";
	
	s1.id=21052611;
	
	s1.bastir();
	
	
}
