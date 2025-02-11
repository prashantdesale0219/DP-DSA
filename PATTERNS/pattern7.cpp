#include<iostream>
using namespace std;
int main(){
//	5 5 5 5 5
//	4 4 4 4
//	3 3 3
//	2 2
//	1
	
	for(int i=1;i<=5;i++){
		for(int j=i;j;j++){
			cout << j << " ";
		}
		cout << endl;
	}
	
	return 0;
}