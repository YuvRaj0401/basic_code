#include <iostream>
using namespace std;

int first_index(int a[],int size,int x)
{
	if(a[0]==x)
	return 0;
	
	if(size==0)
	{
		return -1;
		
	}
	int smallOutput=first_index(a+1,size-1,x);
	if(smallOutput!=-1)
	{
		return smallOutput+1;
		
	}
	else
	{
		return -1;
	}
}
int last_index(int a[],int size,int x)
{
	if(a[size]==x)
	return size;
	
	if(size==0)
	{
		return -1;
		
	}
	int smallOutput=last_index(a,size-1,x);
	if(smallOutput!=-1)
	{
		return smallOutput;
		
	}
	else
	{
		return -1;
	}
}
int main()
{
	int n;
	cout<<"enter the number of elements : ";
	cin>>n;
	int a;
	int *p=new int[n];
	delete []p;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	cout<<"enter the number : ";
	cin>>a;
	int ans=first_index(p,n,a);
	int ans1=last_index(p,n,a);
	if(ans==-1)
	cout<<"not found"<<endl;
	else
	{
		cout<<"found first at : "<<ans<<endl;
		cout<<"found last at : "<<ans1<<endl;
	}
}
