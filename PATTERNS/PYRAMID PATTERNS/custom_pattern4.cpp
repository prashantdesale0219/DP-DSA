#include <iostream>
using namespace std;

int main(){
	
	//1                 1
	//1 2             2 1
	//1 2 3         3 2 1
	//1 2 3 4     4 3 2 1
	//1 2 3 4 5 5 4 3 2 1	
	
	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
			cout << j << " " ;
		}
		for(int k=1;k<=2*(5-i);k++){
			cout << "  ";
		}
		for(int l=i;l>=1;l--){
			cout << l << " ";
		}
		cout << endl;
	}
	
	
	
	
	
	return 0;
}