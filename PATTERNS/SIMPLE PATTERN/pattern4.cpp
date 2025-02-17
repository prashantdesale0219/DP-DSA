#include<iostream>
using namespace std;
int main(){
//	5
//	5 4
//	5 4 3
//	5 4 3 2
//	5 4 3 2 1
	
	for(int i=0;i<=5;i++){
		for(int j=5;j>=5-i;j--){
			cout << j << " ";
		}
		cout << endl;
	}
	
	return 0;
}