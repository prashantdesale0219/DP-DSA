#include <iostream>
using namespace std;

int main (){
	int a,b;
	cout << "ENTER VALUE OF A : ";
	cin >> a;
	cout << "ENTER VALUE OF B : ";
	cin >> b;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout << "VALUE OF A :"<< a <<endl ;
	cout << "VALUE OF B :"<< b;
	
	

	
	return 0;
}