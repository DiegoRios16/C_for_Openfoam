#include <iostream>
using namespace std;
int Reynolds(double L, double rho, double v, double mu);
int main()
{
	double L, rho, v, mu;
	cout<<"We will calculate the Reynolds number in IU"<<endl;
	cout<<"Enter the characteristic length in m: "<<endl;
	cin>>L;
	cout<<"Enter the density of the fluid in kg/m3: "<<endl;
	cin>>rho;
	cout<<"Enter the velocity in m/s: "<<endl;
	cin>>v;
	cout<<"Enter the kinematic viscosity in kg/m2/s2: "<<endl;
	cin>>mu;
	cout<<Reynolds(L,rho, v,mu);
	return 0;

}
int Reynolds(double L, double rho, double v, double mu)
{
	return L*v*rho/mu;
}
