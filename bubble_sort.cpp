#include <iostream>
using namespace std;
void bubble_sort(int ar[])
{
	int swp=0;
	for(int i=0;i<9;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(ar[i]>ar[j])
			{
				swp=ar[i];
				ar[i]=ar[j];
				ar[j]=swp;
			}
		}
	}
	for(int i=0;i<10;i++)
	{
		cout<<ar[i]<<" ";
	}
}
int main()
{
	int a[10];
	
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	bubble_sort(a);
	
	return 0;
}
