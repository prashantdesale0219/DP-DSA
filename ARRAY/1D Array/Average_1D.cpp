#include<iostream>>
using namespace std ;
 
int main(){
	
	int arrsize;
	cout << "ENTER ARR SIZE :";
	cin >> arrsize ;
	
	int arr[arrsize];
	
	for(int i=0;i<arrsize;i++){
		cout << "Enter Arr [" << i << "]";
		cin >> arr[i];
	}
	cout << endl;
	
	float sum=0;
	for(int i=0;i<arrsize;i++){
		sum+=arr[i];
	}
	
	float average=sum/arrsize;
	
	cout << "Average is :"<< average ;
	
	
	return 0;
}