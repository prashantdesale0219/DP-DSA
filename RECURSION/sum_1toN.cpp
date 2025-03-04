#include<iostream>
using namespace std;

int sumOfnum (int n){
	 if (n==0) {
	 	return 0;  
	 }
	 
	 return n+ sumOfnum(n-1);	
}
int main(){
	
	int n ;
	cout << "Enter no : "  ;
	cin >> n ;
	int sum = sumOfnum(n);
	cout << "Sum is : " << sum;
	
	
	return 0;
	
}