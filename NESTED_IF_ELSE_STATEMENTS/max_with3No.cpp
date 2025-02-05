#include <iostream>
using namespace std;

int main(){
	
	int a,b,c;
	
	cout<<"ENTER VALUE OF A :";
	cin >>a ;
	cout<<"ENTER VALUE OF B :";
	cin >>b ;
	cout<<"ENTER VALUE OF C :";
	cin >>c; 
	cout <<endl;
	
	if(a>b){
		if(a>c){
			cout <<"A is maximum ="<< a;
		}
		else{
			cout <<"C is maximum ="<< c;
		}
		
	}
	else{
		if(b>c){
			cout <<" B is maximum ="<< b;
		}
		else{
			cout << " C is maximum ="<< c;
		}
		
	}
	
	
	
	
	
	
	
	
	return 0;
}