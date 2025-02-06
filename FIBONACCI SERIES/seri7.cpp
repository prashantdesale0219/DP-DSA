#include <iostream>
using namespace std;

int main(){
	
	int first= 58  ;
	int second= 52 ;
	
	for(int i=1;i<=10;i++){
		cout<< first << " " << second << " ";
		first-=12;
		second-=12;
	}
	
	// OUTPUT: 58 52 46 40 34 28 22  
	
	
	return 0;
}