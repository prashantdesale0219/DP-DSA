#include <iostream>
using namespace std;

int main(){
	
	int arrsize;
	cout << "Enter size of arr:";
	cin >> arrsize;
	
	int arr[arrsize];
	for(int i=0;i<arrsize;i++){
		cout << "enter arr["<< i << "]"; 
		cin >> arr[i] ;
	}
	cout <<endl;
	
	for(int i=arrsize-1;i>=0;i--){
		cout <<arr[i] << " ";
	}

	
	return 0;
}