#include <iostream>
using namespace std;

int main(){
	
	int arrsize;
	cout << "Enter size of arr:";
	cin >> arrsize;
	
	int table[arrsize];
	for(int i=0;i<arrsize;i++){
		cout << "enter arr["<< i << "]"; 
		cin >> table[i] ;
	}
	cout <<endl;
	
	for(int i=0;i<arrsize;i++){
		for(int j=1;j<=10;j++){
			cout << table[i] << "*"<< j << "="<< table[i]*j << endl;
		}
		cout<<endl;
	}
	
	
	return 0;
}