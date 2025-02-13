#include <iostream>
using namespace std;

int main(){

//	  * * * *
//	*
//	*
//	  * * *
//	        *
//	        *
//	* * * *
	
	for(int i=1;i<=7;i++)//Row
	{
		for(int j=1;j<=5;j++)//Col
		{
			
			if((i==1&&j>1)||(j==1&&(i==2||i==3))||(i==4&&(j>1&&j<5))||(j==5&&(i==5||i==6))||(i==7&&j<5))
			{
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