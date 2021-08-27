//Subsequences of a string
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int subs(string input, string output[])
{
	if(input.empty())
	{
		output[0]="";
		return 1;
	}
	string smallString=input.substr(1);
	int smallOutput = subs(smallString,output);
	for(int i=0;i<smallOutput;i++)
	{
		output[i+smallOutput] = input[0] + output[i];
	}
	return 2 * smallOutput;
}
int main()
{
	string inp;
	cin>>inp;
	int n=pow(2,inp.size());
	string* outp=new string[n];
	int count= subs(inp,outp);
	for(int i=0;i<count;i++)
	{
		cout<<outp[i]<<endl;
	}
}
