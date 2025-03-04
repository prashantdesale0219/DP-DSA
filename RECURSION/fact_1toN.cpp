#include<iostream>
using namespace std;

int factOfnum (int n){
	 if (n==0) {
	 	return 1;  
	 }
	 
	 return n * factOfnum(n-1);	
}
int main(){
	
	int n ;
	cout << "Enter no : "  ;
	cin >> n ;
	int fact = factOfnum(n);
	cout << "Factorial is : " << fact;
	
	
	return 0;
	
}