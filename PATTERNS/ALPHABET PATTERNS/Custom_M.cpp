#include <iostream>
using namespace std;

int main(){

//	*       *
//	* *   * *
//	*   *   *
//	*       *
//	*       *
//	*       *
//	*       *
	
	for(int i=1;i<=7;i++)//Row
	{
		for(int j=1;j<=5;j++)//Col
		{
			
			if((j==1||j==5)||((j==2||j==4)&&i==2)||(j==3&&i==3))
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