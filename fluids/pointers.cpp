#include <iostream>
using namespace std;

void passByReference(int *x);
void passByValue(int x);
int main()
{
	int Betty=35;
	int Carola=35;
	passByValue(Betty);
	passByReference(&Carola);
	cout<<"Now Betty is"<< Betty<<endl;
	cout<<"Now Carola is"<< Carola<<endl;
	return 0;
}
void passByValue(int x)
{
	x=x+5;
}
void passByReference(int *x)
{
	*x=*x+5;
}
