#include <iostream>
using namespace std;

int main (){
	int percentage;
	cout << "enter yore percentage :";
	cin >> percentage;
	
	if(percentage >= 100 || percentage < 0){
 	cout << "Enter Valid Percentage : ";
    }
	else if(percentage> 90 && percentage <=100){
		cout <<" your grad is A !";
	}
	else if(percentage> 75 && percentage <=89){
		cout << "your grad is : B !" ;
	}
	else if(percentage> 51 && percentage <=74){
		cout << "your grad is : C !" ;
	}
	else if(percentage> 33 && percentage <=50){
		cout << "your grad is : D !" ;
	}
	else{
		cout << "you are failed, Batter luck next time..." ;
	}
	
	return 0;
}