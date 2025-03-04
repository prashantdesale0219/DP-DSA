#include<iostream>
using namespace std;

int main(){
	
	int rowSize,colSize;
	cout << "Enter  Sizeof Row and Column:";
	cin >> rowSize >> colSize;
	
	
	int arr[rowSize][colSize];
	for(int i=0;i<rowSize;i++){
		for(int j=0;j<colSize;j++){
			cout << "Enter arr[" << i << "][" << j << "]";
			cin >> arr[i][j];
		}
		cout << endl;
	}
	
	int max=arr[0][0];
	for(int i=0;i<rowSize;i++){
		for(int j=0;j<colSize;j++){
			if(arr[i][j]>max){
				max=arr[i][j];
			}
		}
		cout << endl;
	}
	cout << "max is : " << max ; 

	
	return 0;
}