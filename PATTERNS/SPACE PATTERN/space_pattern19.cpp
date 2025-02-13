#include<iostream>
using namespace std;

int main(){

	//1 0 1 0 1
	//  0 1 0 1
	//    1 0 1
	//      0 1
	//        1
	
	for(int i=1;i<=5;i++){
		for(int j=i;j<=5;j++){
			
			if(j%2!=0){
				cout << "1" << " ";
			}
			else{
				cout << "0" << " ";
			}
		}
		cout << endl;
		for(int k=1;k<=i;k++){
			cout << "  ";
		}
	}
	
	return 0;
}