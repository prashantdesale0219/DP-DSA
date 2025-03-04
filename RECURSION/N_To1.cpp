#include <iostream>
using namespace std;

void recursion(int n, int i = 1) {
    if (n == 0) return;  
    cout << n << " "; 
    recursion(n - 1);  
}

int main() {
	int n ;
	cout << "Enter no : "  ;
	cin >> n ;
    recursion(n);  
    return 0;
}