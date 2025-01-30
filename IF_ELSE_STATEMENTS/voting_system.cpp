#include <iostream>
using namespace std;

int main (){
	int age;
	cout << "enter yore age :";
	cin >> age;
	if(age==0 || age>100){
		cout <<"enter valid age !";
	}
	else if(age<0){
		cout << "please enter positive age" ;
	}
	else if(age>=18){
		cout << "you are eligible to vote" ;
	}
	else{
		cout << "you are not eligible to vote" ;
	}
	
	return 0;
}