#include <iostream>
using namespace std;

int main(){
	
	for(int i=5;i>=1;i--){
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