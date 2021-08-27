#include<iostream>
using namespace std;
double add(double x,double y){
	return (x+y);
};
double subs(double x,double y){
	return (x-y);
};
double mult(double x,double y){
	return (x*y);
};
double d(double x,double y){
	double ans=x/y;
	return ans;
};
int main(){
	int n;
	double a,b;
	cin>>a>>b>>n;
	switch(n){
		case 1:
		cout<<add(a,b)<<endl;
		break;
		case 2:
		if(a>b)
		cout<<subs(a,b)<<endl;
		else
		cout<<subs(b,a)<<endl;
		break;
		case 3:
		cout<<mult(a,b)<<endl;
		break;
		case 4:
		cout<<d(a,b)<<endl;
		break;
		default:
		cout<<"Case not found"<<endl;
	}

}
