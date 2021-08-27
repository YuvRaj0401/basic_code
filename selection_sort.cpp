#include <iostream>
#include <climits>
using namespace std;
void selection_sort(int a[])
{
	
	for(int i=0;i<5;i++)
	{
		int min=INT_MAX,min_ind;
		for(int j=i;j<5;++j)//to find the minimum element
		{
			if(a[j]<min)
			{
				
				min_ind=j;
				min=a[j];
			}
		}
		swap(a[i],a[min_ind]);
	}
};
void print(int ar[]){
	for(int i=0;i<5;i++){
		cout<<ar[i]<<" ";
	}
};

int main()
{
	int a[5];
	
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	selection_sort(a);
	print(a);
	return 0;
}

