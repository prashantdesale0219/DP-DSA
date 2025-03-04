#include<iostream>
using namespace std;

int main(){
	
	int rowSize,colSize;
	cout << "Enter  Sizeof Row and Column:";
	cin >> rowSize >> colSize;
	
	
	int arr1[rowSize][colSize],arr2[rowSize][colSize],arr3[rowSize][colSize];
	for(int i=0;i<rowSize;i++){
		for(int j=0;j<colSize;j++){
			cout << "Enter arr[" << i << "][" << j << "]";
			cin >> arr1[i][j];
			cout << "Enter arr[" << i << "][" << j << "]";
			cin >> arr2[i][j];
		}
		cout << endl;
	}
	
	for(int i=0;i<rowSize;i++){
		for(int j=0;j<colSize;j++){
			
			arr3[i][j]=arr1[i][j]+arr2[i][j];
			cout << arr3[i][j] << " " ;
		}
		cout << endl;
	}
	

	
	return 0;
}