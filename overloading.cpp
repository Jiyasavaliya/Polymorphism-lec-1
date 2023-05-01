#include<iostream>
using namespace std;

class A{
	
	public:
		
		int a,b,c,d;
	
	void print(int a, int b){
		 
	cout<<a/b<<endl;
			
	}
	void print(int c, int d, int e){
			cout<<c-d-e<<endl;
	}
	
};
class B : public A{
	
		public:
			int e,f,g,h,i,j,k,l,m;
	
	void print(int e, int f, int g, int h){
			cout<<e*f*g*h<<endl;
	}
	void print(int i, int j, int k, int l, int m){
			cout<<i+j+k+l+m<<endl;
	}
};
int main(){
	
	B obj;
	obj.A::print(10,2);
	obj.A::print(11,3,3);
	obj.B::print(2,2,2,2);
	obj.B::print(2,4,4,2,2);  
	
	
}
