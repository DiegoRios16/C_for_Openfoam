#include <iostream>
#include <cmath>
#include <vectors.h>
using namespace std;
double vector_length(double x, double y, double z);
//double vector_add[3][1](double vector1[3][1]);

class Vectors
{
public:
	//int printV1();
	//Vectors(double xx, double yy, double zz){
	//	vector1[0][0]=xx;
	//	vector1[1][0]=yy;
	//	vector1[2][0]=zz;
	//}
	void setVector1();
	void setVector2();
	void addVectors();
	int printVectorSum();
	double vector1Length();
private:
	double vector1[3][1];
	double vector2[3][1];
	double vector3[3][1];

};

int main()
{
//	cout<<vector_add(vector1);
	#include <vectors.h>
	Vectors vec;
	vec.setVector1();
	vec.setVector2();
	vec.addVectors();
	vec.printVectorSum();
	vec.vector1Length();
	main2();
	return 0;

}
double vector_length(double x, double y, double z)
{
	double L;
	L= sqrt(pow(x,2)+pow(y,2)+pow(z,2));
	return L;
}
//int Vectors::printV1(){
//	cout<<"Hola Companero"<<endl;
//	for (int i=0;i<3;i++){
//		cout<<i<<" component of first vector is..."<<vector1[i][0]<<endl;
//	}
//	return 0;
//}
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

//double vector_add[3][1](double vector1[3][1]);
//	double vector_add[3][1];
//	for(int i=0;i<3;i++)
//	{
//	vector_add[i][0]=vector1[i][0];
//	return vector_add
//	}	
