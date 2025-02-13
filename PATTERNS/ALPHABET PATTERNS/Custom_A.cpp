#include <iostream>
using namespace std;

int main(){
	
//	* * * * *
//	*       *
//	*       *
//	* * * * *
//	*       *
//	*       *
//	*       *
	
	for(int i=1;i<=7;i++)//ROW
	{
		for(int j=1;j<=5;j++)//COL
		{
			
			if(j==1||j==5||i==1||i==4){
				cout << "* " ;
			}
			else{
				cout<< "  ";
			}
			
		}
		cout << endl;
	}
	
	
	
	
	
	return 0;
}