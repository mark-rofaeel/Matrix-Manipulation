/* Nardine Youhanna Adib 20186045
   Mark Rofaeel Gorgy 20186043*/
#include <iostream>
#include "Class Matrix.h"
using namespace std;
int main()
{  for(;;)
{	
	cout<<"1.Add"<<endl<<"2.Subtract"<<endl<<"3.Multiply"<<endl<<"4.Add Scalar"<<endl<<"5.Subtract Scalar"<<endl;
	cout<<"6.Multiply Scalar"<<endl<<"7.Transpose"<<endl<<"8.Test If Sqauare"<<endl<<"9.Test If Indentity"<<endl;
	cout<<"10.PrintMatrix"<<endl<<"11.Delete"<<endl<<"12.Copy"<<endl<<"13.Close Program"<<endl; 
	int x;
	cin>>x;
    Matrix mat1;
	if(x==1)
	{mat1.add();}
	else if(x==2)
	{mat1.subtract();}
	else if(x==3)
	{mat1.Multiply();}
	else if(x==4)
	{mat1.addScalar();}
	else if(x==5)
	{mat1.subtractScalar(); }
	else if(x==6)
	{mat1.multiplyScalar();}
	else if(x==7)
	{mat1.transpose ();}
	else if(x==8)
	{mat1.isSquare ();}
	else if(x==9)
	{mat1.isIdentity ();}
	else if(x==10)
	{/*PrintMatrix();*/}
	else if(x==11)
	{mat1.~Matrix();}
	else if(x==12)
	{/*	Matrix(const Matrix& m)*/}
	else if(x==13)
	{
	return 0;
	}
}
}

