#include <iostream>
using namespace std;

int main(){
	
	int num;
	int n;
	
	cout<<"ENTER FIRST NUMBER:";
	cin >>num ;
	cout<<"ENTER SECOND NUMBER:";
	cin >>n ;

	if(num%n==0){
		cout <<"YOUR NO ="<< num <<" IS DIVISIBLE BY NO ="<< n ;
	}
	else{
		cout <<"YOUR NO ="<< num <<" IS NOT DIVISIBLE BY NO ="<< n ;
	}
	
	
	
	

	return 0;
}