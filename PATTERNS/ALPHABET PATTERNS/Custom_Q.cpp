#include <iostream>
using namespace std;

int main(){
	
//	  * * *
//	*       *
//	*       *
//	*       *
//	*   *   *
//	*     * *
//	  * * * *
//	          *
	
	for(int i=1;i<=8;i++)//Row
	{
		for(int j=1;j<=6;j++)//Col
		{
			
			if(((j==1||j==5)&&(i>1&&i<7))||((i==1||i==7)&&(j>1&&j<5))||(i==6&&j==4)||(i==5&&j==3)||(i==8&&j==6)||(i==7&&j==5))
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