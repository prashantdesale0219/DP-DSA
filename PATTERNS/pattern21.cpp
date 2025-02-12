#include<iostream>
using namespace std;
int main(){
	//A
	//A B
	//A B C
	//A B C D
	//A B C D E
	
	
	for(int i=1;i<=5;i++){
		char k='A' ;
		for(char j=1;j<=i;j++){
			cout << k << " ";
			k++ ;
		}
		cout << endl;
	}
	

	return 0;
}