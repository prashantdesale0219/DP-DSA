#include <iostream>
using namespace std;

int main(){
	
	int first= 8 ;
	
	for(int i=1;i<=10;i++){
		cout<< first << "  " ;
		first=first*i-(i+1);
	}
	
	
	// OUTPUT:     8, 6, 9, 23, 87
	
	return 0;
}