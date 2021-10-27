#include <iostream>
#include <cmath>
using namespace std;
double vector_length(double x, double y, double z);
int main()
{
	double L;
	double vector[3][1];
	cout<<"We will calculate the length of a vector"<<endl;
	cout<<"Enter x: "<<endl;
	cin>>vector[0][0];
	cout<<"Enter y: "<<endl;
	cin>>vector[1][0];
	cout<<"Enter z: "<<endl;
	cin>>vector[2][0];
	cout<<vector_length(vector[0][0],vector[1][0],vector[2][0])<<endl;
	return 0;

}
double vector_length(double x, double y, double z)
{
	double L;
	L= sqrt(pow(x,2)+pow(y,2)+pow(z,2));
	return L;
}
