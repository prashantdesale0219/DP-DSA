#include <iostream>
using namespace std;

int main (){
	int percentage;
	cout << "enter yore percentage :";
	cin >> percentage;
	if(percentage> 90 && percentage <=100){
		cout <<" your grad is A+ !";
	}
	else if(percentage> 75 && percentage <=89){
		cout << "your grad is A !" ;
	}
	else if(percentage> 55 && percentage <=74){
		cout << "your grad is B !" ;
	}
	else if(percentage> 33 && percentage <=55){
		cout << "your grad is C !" ;
	}
	else{
		cout << "you are failed, please give reExam..." ;
	}
	
	return 0;
}