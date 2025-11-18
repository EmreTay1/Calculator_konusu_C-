#include<iostream>
#include<cmath>
using namespace std;

namespace calc{
	int kare(int x){
		return x*x;
	}
	float kare(float x){
		return x*x;
	}
	
}


double kare(double x){
		return x*x;
	}
	
	

int main(){
	
	cout<<kare(9.18)<<endl;
	cout<<calc::kare(9)<<endl;
	cout<<calc::kare(3.1111111446f)<<endl;
	
	
	
	
	
	
	
	
	
	
	return 0;
}
