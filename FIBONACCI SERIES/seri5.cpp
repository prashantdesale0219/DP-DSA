#include <iostream>
using namespace std;

int main(){
	
	int first= 53 ;
	
	for(int i=1;i<=10;i++){
		cout<< first << " " << first << " ";
		first-=13;
	}
	
	
	// OUTPUT: 53 53 40 40 27 27 14 14  
	
	
	return 0;
}