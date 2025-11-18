#include<iostream>

using namespace std;

class Array{
	
	private:
		int *data;
		int size;
		
	public:
		
		Array(int s):size(s)
			{
				
				data=new int[size];
			}
	
	
		~Array(){
			delete []data;
		}
};



int main(){
	Array a1(5);
}
