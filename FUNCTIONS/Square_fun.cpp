#include<iostream>
using namespace std;

void square(int num){
	
	cout << "Square is :" << num * num ;
	
}

int main(){
	
	int n ;
	cout << "Enter no : "  ;
	cin >> n ;
	square(n);
	
}