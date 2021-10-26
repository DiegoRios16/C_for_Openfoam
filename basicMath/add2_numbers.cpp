#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	float a,b;
	string statement1, statement2, statement3;
	statement1="We'are going to calculate the KE=1/2mv^2";
	statement2="Insert mass[kg]: ";
	statement3="Insert velocity[m/s]: ";
	cout<<statement1<<endl;
	cout<<statement2;
	cin>>a;
	cout<<statement3;
	cin>>b;
	cout<<0.5*a*pow(b,2)<<endl;
	cout<<sqrt(2.0)<<endl;
	cout<<pow(2.0, 0.5)<<endl;
	return 0;
}
