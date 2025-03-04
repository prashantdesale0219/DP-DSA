#include<iostream>
using namespace std;

void cube(int num){
	
	cout << "Cube is :" << num * num * num ;
	
}

int main(){
	
	int n ;
	cout << "Enter no : "  ;
	cin >> n ;
	cube(n);
	
}