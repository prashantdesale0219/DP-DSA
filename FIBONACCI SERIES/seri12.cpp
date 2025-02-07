#include <iostream>
using namespace std;

int main(){
	
	int first= 14 ;
	
	for(int i=1;i<=10;i++){
		cout<< first << " " ;
		if(i%2==0){
			first-=8;
		}
		else{
			first*=2;
		}
	}
	
	// OUTPUT: 14, 28, 20, 40, 32, 64,
	
	
	return 0;
}