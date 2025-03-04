#include<iostream>
using namespace std;

void table(int num){
	
	for(int i=1;i<=10;i++){
		cout << num << "*" << i << "=" << num*i  ;
		cout << endl;
	}

}

int main(){
	
	int n ;
	cout << "Enter no : "  ;
	cin >> n ;
	table(n);
	
}