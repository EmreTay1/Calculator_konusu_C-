#include<iostream>

class Rectangle{
	
	private:
		int x;
		int y;
	
	public:
		
		Rectangle(int x,int y){
			this->x=x; 
			this->y=y; 
		}
		
		
		friend int Area(Rectangle &nesne);
		
};

int Area(Rectangle &nesne){
	
	return nesne.x*nesne.y;
}


int main() {
	
	Rectangle r1(5,4);
	std::cout<< Area(r1);
}
