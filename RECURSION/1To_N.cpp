#include <iostream>
using namespace std;

void recursion(int n, int i = 1) {
    if (i > n) return;  
    cout << i << " "; 
    recursion(n, i + 1);  
}

int main() {
	int n ;
	cout << "Enter no : "  ;
	cin >> n ;
    recursion(n);  
    return 0;
}