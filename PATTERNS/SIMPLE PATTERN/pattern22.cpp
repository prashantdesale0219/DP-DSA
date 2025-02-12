#include<iostream>
using namespace std;
int main(){

	//A
	//B C
	//D E F
	//G H I J
	//K L M N O
	
	char k='A' ;
	for(int i=1;i<=5;i++){
		for(char j=1;j<=i;j++){
			cout << k << " ";
			k++ ;
		}
		cout << endl;
	}
	

	return 0;
}