//iki vektörün toplamý

#include<iostream>
using namespace std;

class Vector{
	private:
		int x;
		int y;
		
	public:
	Vector(){}	
	Vector(int a,int b):x(a),y(b){
	}
	Vector operator +(const Vector &v){
		return Vector(x+v.x,y+v.y);
		
	}
	
	
	friend ostream &operator <<(ostream &out,Vector &v);
	
	
	
	
	
};

ostream &operator <<(ostream &out,Vector &v){
	
	out<<"("<<v.x<<","<<v.y<<")\n";
	return out;
}


int main(){
	
	Vector v1(2,3);
	Vector v2(3,4);
	Vector v3;
	v3=v1+v2;
	cout<<v3;
	
	
	
}
