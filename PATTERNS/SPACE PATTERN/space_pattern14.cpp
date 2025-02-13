#include<iostream>
using namespace std;

int main(){
	
	
	for(int i=1;i<=5;i++){
	for(int k=i;k<=4;k++){
			cout << "  ";
		}	
		char l='A';
		for(int j=1;j<=i;j++){
			cout << l << " ";
			l++;
		}
		cout << endl;
	}
}