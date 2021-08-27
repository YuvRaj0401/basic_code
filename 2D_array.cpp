//create a 2D array with length, breadth and its elements as input 
#include<iostream>
using namespace std;
int main()
{
	int m,n;//m rows n columns
	cin>>m>>n;
	int **p=new int*[m];
	for(int i=0;i<m;i++)
	{
		p[i]= new int[n];
		for(int j=0;j<n;j++)
		{
			cin>>p[i][j];
		}
	}
	
	//next part is deletion which is very important to prevent memory leakage
	for(int i=0;i<m;i++)
	{
		delete []p[i];//delete rows
	}
	delete []p;//delete elements
}
