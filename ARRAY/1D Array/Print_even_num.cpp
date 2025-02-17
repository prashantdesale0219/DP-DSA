#include <iostream>
using namespace std;

int main(){
	
	int arr;
	cout << "Enter size of Array :" ;
	cin >> arr;
	
	int newarr[arr];
	
	for(int i=0; i<arr ;i++){
		cout <<"Enter value of arr ["<< i << "] :";
		cin >> newarr[i];	
	}
	cout <<endl ;
	
	 for(int i=0;i<arr;i++){
	 	if(newarr[i]%2==0){
	 		cout << newarr[i] << endl;
		 }
	 	
	 }
	
	
	
	return 0;
}