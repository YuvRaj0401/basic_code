#include <iostream>
using namespace std; 
void reverse(int a[])
{
	for(int i=4;i>0	;i--)
	{
		for(int j=i-1;j>-1;j--)
		{
			int tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;
		}
	}
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int ar[5];
	for(int i=0;i<5;i++)
	{
		cin>>ar[i];
	}
	
	reverse(ar);
	
	return 0;
}
