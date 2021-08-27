#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	cout<<str<<endl;
	cout<<size(str)<<endl;
	cout<< str.size() <<endl;
	cout<< str.length() <<endl;
	cout<< str.at(4)<<endl;
	int n = str.size();
	for(int i=n-1;i>0;i--)
	{
		for(int j=i-1;j>-1;j--)
		{
			char tmp=str.at(j);
			str.at(j)=str.at(i);
			str.at(i)=tmp;
		}
	}
	cout<<str<<endl;
}
