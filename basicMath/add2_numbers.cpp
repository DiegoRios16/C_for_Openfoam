#include<iostream>
#include<string>
using namespace std;
int main()
{
	float a,b;
	string statement1, statement2, statement3;
	statement1="We'll add 2 numbers: ";
	statement2="Insert first number: ";
	statement3="Insert 2nd number: ";
	cout<<statement1<<endl;
	cout<<statement2;
	cin>>a;
	cout<<statement3;
	cin>>b;
	cout<<a+b<<endl;
	return 0;
}
