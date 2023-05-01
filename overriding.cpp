#include<iostream>
using namespace std;

class cricket{
    
	public:
		
	void gertotleovers(){
		
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
		
		cout<<"Testmatch-your totle overs is 20";
	}
};

int main(){ 

     
	 
	 Testmatch obj2;
	
	 
	obj2.cricket::gettotleovers();
	obj2.T20match::gettotleovers(); 
	obj2.Testmatch::gettotleovers();
}
