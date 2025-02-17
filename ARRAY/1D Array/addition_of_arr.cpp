#include <iostream>
using namespace std;

int main(){
	
	int arr;
	cout << "Enter size of Array :" ;
	cin >> arr;
	int firstarr[arr],secarr[arr],sumofarr[arr];//newarr[5]
	
	for(int i=0; i<arr ;i++) //arr[0],arr[1]...arr[4].
	{
		cout <<"Enter value of arr first ["<< i << "] :";//get value 
		cin >> firstarr[i];
		cout << endl;
		cout <<"Enter value of arr second ["<< i << "] :";//get value 
		cin >> secarr[i];
		cout << endl;
		
	}
	cout <<endl ;
	
		
	
	for(int i=0;i<arr;i++){
	sumofarr[i]=firstarr[i]+secarr[i];
	cout << sumofarr[i] << " ";
	}
	
	return 0;
}