# include<iostream>
using namespace std;

int main(){
	int n;
	cout << "PLEASE INTER NO :";
	cin >> n ;
	for(int i=n;i>=1;i-- ){
		if(i%2==0){
			cout<< i << " " ;
		}
		
	}
	
	return 0;
}