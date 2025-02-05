#include <iostream>
using namespace std;

int main(){
	
	int a,b,c,d;
	
	cout<<"ENTER VALUE OF A :";
	cin >>a ;
	cout<<"ENTER VALUE OF B :";
	cin >>b ;
	cout<<"ENTER VALUE OF C :";
	cin >>c;
	cout<<"ENTER VALUE OF D :";
	cin >>d;  
	cout <<endl;
	
	if(a>b){
		if(a>c){
			if(a>d){
				cout <<"A is maximum ="<< a;
			}
			else{
				cout << "D is maximum ="<< d;
			}
		}
		else{
			cout <<"C is maximum ="<< c;
		}
		
	}
	else{
		if(b>c){
			
			if(b>d){
				cout <<" B is maximum ="<< b;
			}
			else{
				cout <<" D is maximum ="<< d;
			}
		}
		else{
			if(c>d){
				cout << " C is maximum ="<< c;
			}
			else{
				cout << " D is maximum ="<< d;
			}
			
		}
		
	}
	
	
	
	
	
	
	
	
	return 0;
}