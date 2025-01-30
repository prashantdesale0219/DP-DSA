#include <iostream>
using namespace std;

int main (){
	int num;
	cout << "enter number :";
	cin >> num;
	if(num==0){
		cout <<"your number is neutral !";
	}
	else if(num>0){
		cout <<"your number is positive !";
	}
	else if(num<0){
		cout <<"your number is negative !";
	}

	
	return 0;
}