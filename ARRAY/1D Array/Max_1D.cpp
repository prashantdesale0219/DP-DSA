#include<iostream>
using namespace std;

int main(){
	
	int n, max;
	cout << "Enter no :";
	cin >> n;
	
	int a[n];
	for(int i=0;i<n;i++){
		cout << "enter a["<< i << "]";
		cin >> a[i];
	}
	max=a[0];
	for(int i=1;i<n;i++){
		if(max<a[i])
		{
			max=a[i];
		}
	}
	cout << "max is:"<< max;
	
	
	
	return 0;
}