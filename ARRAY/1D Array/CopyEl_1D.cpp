#include <iostream>
using namespace std;

int main(){
	
	int arrsize;
	cout << "Enter size of arr:";
	cin >> arrsize;
	
	int arr1[arrsize],arr2[arrsize];
	
	for(int i=0;i<arrsize;i++){
		cout << "enter arr["<< i << "]"; 
		cin >> arr1[i] ;
	}
	cout <<endl;
	
	for(int i=0;i<arrsize;i++){
		arr2[i] = arr1[i];
	}
	cout <<"Arr1 : Arr2"<< endl;
	for(int i=0;i<arrsize;i++){
		cout << arr1[i] << "    :   " << arr2[i]<< endl;;
		
	}

	
	return 0;
}