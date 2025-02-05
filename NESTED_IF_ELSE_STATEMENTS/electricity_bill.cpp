#include <iostream>
using namespace std;

int main(){
	
	float units;
	int bill;
	
	
	cout<<"ENTER UNITS PLEASE :";
	cin >>units ;
	cout <<endl;

		if(units>0 && units <=100)
		{
			bill=units*0.5;
			cout <<"YOUR FINAL BILL BASED ON ENTERED UNITS : " <<bill;
		}	
		else if(units>100 && units<=200){
			bill=units*1;
			cout <<"YOUR FINAL BILL BASED ON ENTERED UNITS : " <<bill;
		}
		else if(units>200 && units<=300){
			bill=units*1.5;
			cout <<"YOUR FINAL BILL BASED ON ENTERED UNITS  : " <<bill;
		}
		else if(units>300){
			bill=units*2;
			cout <<"YOUR FINAL BILL BASED ON ENTERED UNITS  : " <<bill;
		}
		else{
			cout <<"PLEASE ENTER VALID UNITS..!";
		}
		
		
		
	

	return 0;
}