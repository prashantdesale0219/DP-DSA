#include<iostream>
using namespace std;

int main(){
	
	int n, min;
	cout << "Enter no :";
	cin >> n;
	
	int a[n];
	for(int i=0;i<n;i++){
		cout << "enter a["<< i << "]";
		cin >> a[i];
	}
	min=a[0];
	for(int i=1;i<n;i++){
		if(min>a[i])
		{
			min=a[i];
		}
	}
	cout << "min is:"<< min;
	
	
	
	return 0;
}