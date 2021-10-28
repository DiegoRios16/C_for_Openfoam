#include <iostream>
using namespace std;
#include "vectors.h"
#include <cmath>
void main2(){
	cout<<"I am the a beast"<<endl;
}
void Vectors::setVector1(){
	cout<<"Insert x component of first Vector: "<<endl;
	cin>>vector1[0][0];
	cout<<"Insert y component of second Vector: "<<endl;
	cin>>vector1[1][0];
	cout<<"Insert z component of second Vector: "<<endl;
	cin>>vector1[2][0];
}
void Vectors::setVector2(){
	cout<<"Insert x component of second Vector: "<<endl;
	cin>>vector2[0][0];
	cout<<"Insert y component of second Vector: "<<endl;
	cin>>vector2[1][0];
	cout<<"Insert z component of third Vector: "<<endl;
	cin>>vector2[2][0];

}
void Vectors::addVectors(){
	for(int i=0;i<3;i++){
		vector3[i][0]=vector2[i][0]+vector1[i][0];
	}
}
int Vectors::printVectorSum(){
	cout<<"The result is: "<<endl;
	for(int i=0;i<3;i++){
		cout<<vector3[i][0]<<endl;
	}
	return 0;
}
double Vectors::vector1Length(){
	double L;
	L=sqrt(pow(vector3[0][0],2)+pow(vector3[1][0],2)+pow(vector3[2][0],2));
	cout<<"The vector length is:"<<L<<endl;
	return 0;
}
