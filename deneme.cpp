#include<iostream>

using namespace std;

namespace oz{
	
	void bastir(string name="emre"){
		cout<<name;
		
	}
}


int main(){
	
	string name;
	
	cout<<"ad gir";
	cin>>name;
	oz::bastir(name);
	
}
