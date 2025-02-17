#include <iostream>
using namespace std;

int main(){
	
	int arr;
	cout << "Enter size of Array :" ;
	cin >> arr;
	int sum=0;
	
	int newarr[arr];//newarr[5]
	
	for(int i=0; i<arr ;i++) //arr[0],arr[1]...arr[4].
	{
		cout <<"Enter value of arr ["<< i << "] :";//get value 
		cin >> newarr[i];
		cout << endl;
		sum=sum+newarr[i];//sum=0+arr[1]==1....

	}
	cout <<endl ;
	
	cout <<"Total:" <<sum ;//sum after all elements	
	
	return 0;
}