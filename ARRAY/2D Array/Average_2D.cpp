#include<iostream>
using namespace std;

int main(){
	
	int rowSize,colSize;
	float sum=0,average;
	cout << "Enter  Sizeof Row and Column:";
	cin >> rowSize >> colSize;
	
	
	int arr[rowSize][colSize];
	for(int i=0;i<rowSize;i++){
		for(int j=0;j<colSize;j++){
			cout << "Enter arr[" << i << "][" << j << "]";
			cin >> arr[i][j];
		cout << endl;
	}
	
	for(int i=0;i<rowSize;i++){
		for(int j=0;j<colSize;j++){	
		cout << endl;
	}
	

	
	cout <<"Sum is : " << sum << endl;
	average=sum/(rowSize*colSize);
	cout << "Average is : " << average ;
		return 0;          
}