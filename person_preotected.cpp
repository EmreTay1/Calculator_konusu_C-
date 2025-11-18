#include<iostream>

using namespace std;

class Person{
	protected:
		string name;
		int age;
	public:
		
	Person(string n,int a ):name(n),age(a){
	}
	void bastir(){
		
		cout<<name<<" "<<age<<endl;
	}
		
	
};


class Student:public Person{
	
	protected:
		int id;
	public:	
	
	Student(string n,int a,int i):Person(n,a),id(i){
	}
	void bastir(){
		Person::bastir();
		cout<<id;
	}
	
};

class Teacher:public Person{
	
	protected:
		string branch;
		
	public:
		
		Teacher(string n,int a,string b):Person(n,a),branch(b){
		}
		
	void bastir1(){
		bastir();
		cout<<branch;
		
	}	
};

int main(){
	Student s1("emre",25,21052611);
	Teacher t("hakan",35,"fizik");
	s1.bastir();
	t.bastir();
	
}
