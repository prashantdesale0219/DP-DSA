#include <iostream>
using namespace std;

int main(){
	
	int first= 80 ;
	int second=10;
	
	for(int i=1;i<=10;i++){
		cout<< first << " " << second << " ";
		first-=10;
		second+=5;
		
	}
	
	
	// OUTPUT:    80, 10, 70, 15, 60
	
	return 0;
}