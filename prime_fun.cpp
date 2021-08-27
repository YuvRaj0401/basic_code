#include <iostream>
using namespace std; 
bool prime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		return false;
	}
	return true;
};
int main()
{
	int n;
	cin>>n;
	for(int x=2;x<=n;x++)
	{
		if(prime(x))
		cout<<x<<endl;
	}
	
}
