#include<iostream>
using namespace std;

void cube(int num){
	
	int fact=1;
	for(int i=num;i>0;i--){
		fact*=i;	
	}
	cout << "Factorial is : " << fact;
}

int main(){
	
	int n ;
	cout << "Enter no : "  ;
	cin >> n ;
	cube(n);
}