#include <iostream>
using namespace std;

int main(){
	
	int first= 2  ;
	int second= 2 ;
	
	for(int i=0;i<=10;i++){
		cout<< "1/" << second <<" " ;
		second*=2;
	}
	
	
	// OUTPUT: 1/2 1/4 1/8 1/16 1/32 1/64 1/128 1/256
	
	return 0;
}