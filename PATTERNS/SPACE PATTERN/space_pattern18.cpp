#include<iostream>
using namespace std;

int main(){
	
	//        1
	//      0 0
	//    1 1 1
	//  0 0 0 0
	//1 1 1 1 1
	
	for(int i=1;i<=5;i++){
		for(int k=i;k<=4;k++){
			cout << "  ";
		}
		for(int j=1;j<=i;j++){
			if(i%2!=0){
				cout << "1" << " ";
			}
			else{
				cout << "0" << " ";
			}
			
		}
		cout << endl;
	}
	
	return 0;
}