#include <iostream>
using namespace std;

int main(){
	
//	* * * *
//	  *     *
//	  *     *
//	  *     *
//	  *     *
//	  *     *
//	* * * *
	
	for(int i=1;i<=7;i++)//Row
	{
		for(int j=1;j<=5;j++)//Col
		{
			
			if(((i==1 || i==7) && j<=4)||(j==2||j==5 && (i>1 && i<7)))
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