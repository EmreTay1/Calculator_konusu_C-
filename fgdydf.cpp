#include<iostream>
#include<cmath>
using namespace std;

/*int hesap(char islem ,int a,int b){
	
	if(islem=='+'){
		return a+b;
	}
	
	else if (islem=='-'){
		return a-b;
	}
	
	else {
		
		return a*b;
	}
	
}

int main(){
	
	int a,b;
	char islem;
	cout << "islem sec +,-,*:";
	cin>> islem;
	cout<< "a,b sırasıyla gir:";
	cin >> a>>b;	
	
	cout <<hesap(islem,a,b);,
	
	return 0;
}
	
*/


void display(string name){
	
	cout<< name<<endl;
};


int display(int x){
	
	return pow(x,2);
}
	

namespace MathUtils {
	
	int square(int a){
		
		return pow(a,2);
	}
}
	
	

namespace B {
	
	int square(int a){
		
		return pow(a,3);
	}
}
	
int main(){
	display("emre");
	cout<<display(5)<<endl;
	cout <<MathUtils::square(8)<<endl;
	cout <<B::square(8);
	
	return 0;
}
	

	
	
	
	
	
	
	
	
	
	

