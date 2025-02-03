#include <iostream>
using namespace std;

int main (){
	int amount,discount;
	cout << "ENTER VALUE OF AMOUNT : ";
	cin >> amount;
	if(amount>0 && amount<=1000){
		discount=(amount*5)/100;
		amount=amount-discount;
		cout << "YOU GET 5% DISCOUNT THAN YOUR FINAL BILL :" <<amount ;
	}
	else if(amount>1000 && amount<=5000){
		discount=(amount*10)/100;
		amount=amount-discount;
		cout << "YOU GET 10% DISCOUNT THAN YOUR FINAL BILL :" <<amount ;
	}
	else if(amount>5000 && amount<=10000){
		discount=(amount*15)/100;
		amount=amount-discount;
		cout << "YOU GET 15% DISCOUNT THAN YOUR FINAL BILL :" <<amount ;
	}
	else if(amount>10000){
		discount=(amount*25)/100;
		amount=amount-discount;
		cout << "YOU GET 25% DISCOUNT THAN YOUR FINAL BILL :" <<amount ;
	}
	else{
		cout << "please  inter valid amount";
	}
	

	
	

	
	return 0;
}