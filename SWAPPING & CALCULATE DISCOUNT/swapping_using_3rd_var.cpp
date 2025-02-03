#include <iostream>
using namespace std;

int main (){
	int a,b,c;
	cout << "ENTER VALUE OF A : ";
	cin >> a;
	cout << "ENTER VALUE OF B : ";
	cin >> b;
	
	c=a ;
	a=b ;
	b=c ;
	
	
	cout << "VALUE OF A :"<< a <<endl ;
	cout << "VALUE OF B :"<< b;
	
	

	
	return 0;
}