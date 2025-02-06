#include <iostream>
using namespace std;

int main(){
	
	int first= 8  ;
	int second= 22 ;
	// 
	for(int i=1;i<=10;i++){
		cout<< first << " " << second << " ";
		second+=6;
	}
	
	// OUTPUT: 8, 22, 8, 28, 8
	
	
	return 0;
}