#include<iostream>
using namespace std;

class cricket{
    
	public:
		
	void gettotleovers(){
		
		cout<<"your totle overs is 10"<<endl;
	}
};

class T20match : public cricket{
	
	public:
	
	void gettotleovers(){
		
		cout<<"T20-your totle overs is 20"<<endl;
	}
};

class Testmatch : public cricket{
	public:
	
	void gettotleovers(){
		
		cout<<"Testmatch-your totle overs is 30";
	}
};

int main(){ 
     
cricket obj1;
T20match obj2;
Testmatch obj3;
	 
	
	obj1.gettotleovers(); 
	obj2.gettotleovers(); 
	obj3.gettotleovers();
}
