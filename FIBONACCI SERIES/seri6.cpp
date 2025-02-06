#include <iostream>
using namespace std;

int main(){
	
	int first= 21  ;
	int second= 9 ;
	
	for(int i=1;i<=10;i++){
		cout<< first << " " << second << " ";
		second+=2;
	}
	
	
	// OUTPUT: 21 9 21 11 21 13 21 
	
	return 0;
}