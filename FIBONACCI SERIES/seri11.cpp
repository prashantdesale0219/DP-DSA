#include <iostream>
using namespace std;

int main(){
	
	float first= 1.5  ;
	
	for(int i=1;i<=10;i++){
		cout<< first << " ";
		first+=0.8;
	}
	
	
	// OUTPUT:  1.5, 2.3, 3.1, 3.9,
	
	return 0;
}