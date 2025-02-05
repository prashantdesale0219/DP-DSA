# include<iostream>
using namespace std;

int main(){
	int n;
	cout << "PLEASE INTER NO :";
	cin >> n ;
	int i=n;
	while(i>=1){
		if(i%2==0){
			cout<< i << " " ;
		}
		i--;
	}
	
	return 0;
}