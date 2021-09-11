/* Nardine Youhanna Adib 20186045
   Mark Rofaeel Gorgy 20186043*/
#include <iostream>
using namespace std;
class Matrix 
{ 
private:
int** data; // Pointer to 2D array
int row, col;
public:
	Matrix (); // Allocates memory for the 2D matrix
	Matrix(const Matrix& m) {row=m.row; col=m.col;} // A copy constructor
	Matrix add(); // Add if same dimensions (row1 = row2 and column1 = column2)
	Matrix subtract(); // Subtract if same dimensions (row1 = row2 and column1 = column2)
	Matrix Multiply(); // Multiply if column1 == row2
	Matrix addScalar(); // Add a scalar number to matrix 
	Matrix subtractScalar(); // Subtract a scalar number to matrix
	Matrix multiplyScalar();  // Multiply by a scalar number to matrix
	Matrix transpose ();  // Return new matrix with the transpose (Elements of rows will be the elements of columns and vice versa)
	bool isSquare (); // True if square matrix (rows = columns)
	bool isIdentity (); // True if square and identity friend
	friend void  PrintMatrix();
	~Matrix(); //de-allocates memory
};
	Matrix::Matrix()
	{
	int** data=new int*[row];
	for(int i=0;i<row;i++) 
	data[i]=new int[col]; 
	for(int i=0;i<row;i++)
	for(int j=0;j<col;j++) 
	cin>>data[i][j]; 
	}
	Matrix Matrix::add()
	{
	int rb,cb,ca,ra; 
	cout<<"Enter row1, column1, row2, column2"<<endl;
	cin>>ra>>ca>>rb>>cb;
	int b[rb][cb]; 
	int a[ra][ca];
	if (ra==rb && ca==cb)
	{ 
	cout<<"Enter the elements of matrix1, matrix2:"<<endl;
	for(int i=0;i<ra;i++) for(int j=0;j<ca;j++) cin>>a[i][j];
	for(int i=0;i<rb;i++) for(int j=0;j<cb;j++) cin>>b[i][j];  
	int w[ra][ca];
	cout<<"The addition of the 2 matrices is:"<<endl;
	for(int i=0;i<ra;i++)
	for(int k=0;k<ca;k++) 
	{
	w[i][k]=a[i][k]+b[i][k]; 
	cout<<w[i][k]<<endl;
	}
	}
	else 
	{
	cout<<"Error, you need to enter 2 equal dimentions matricies!"<<endl;	
	}	
	}
	Matrix Matrix::subtract()
	{
	int rb,cb,ca,ra; 
	cout<<"Enter row1, column1, row2, column2"<<endl;
	cin>>ra>>ca>>rb>>cb;
	int b[rb][cb];
	int a[ra][ca];
	if (ra==rb && ca==cb)
	{ 
	cout<<"Enter the elements of matrix1, matrix2:"<<endl;
	for(int i=0;i<ra;i++) for(int j=0;j<ca;j++) cin>>a[i][j];
	for(int i=0;i<rb;i++) for(int j=0;j<cb;j++) cin>>b[i][j];  
	int w[ra][ca];
	cout<<"The subtraction of the 2 matrices is:"<<endl;
	for(int i=0;i<ra;i++)
	for(int k=0;k<ca;k++) 
	{
	w[i][k]=a[i][k]-b[i][k]; 
	cout<<w[i][k]<<endl;
	}
	}
	else 
	{
	cout<<"Error, you need to enter 2 equal dimentions matricies!"<<endl;	
	}	
	}
	Matrix Matrix::Multiply()
	{
int ra,rb, ca, cb; 
cout<<"Enter row1, column1, row2, column2"<<endl;
cin>>ra>>ca>>rb>>cb;
int a[ra][ca];
int b[rb][cb];
if (ca==rb)
{
cout<<"Enter the elements of matrix1, matrix2:"<<endl;
for(int i=0;i<ra;i++) for(int j=0;j<ca;j++) cin>>a[i][j]; 
for(int i=0;i<rb;i++) for(int j=0;j<cb;j++) cin>>b[i][j]; 
int i,j,k;
for(i=0;i<ra;i++) 
for(j=0;j<cb;j++) 
{
int w[i][j];
w[i][j]=0; 
cout<<"The multiplication of the 2 matrices is:"<<endl; 
for(k=0;k<ca;k++) 
w[i][j]+=a[i][k]*b[k][j]; 
cout<<w[i][j]<<endl;
}
}
	else 
	{
	cout<<"Error, number of columns in matrix1 must be same number of rows in matrix2"<<endl;	
	}	
	}
	Matrix Matrix::addScalar()
	{
	int ra,ca; 
	cout<<"Enter rows and coloumns:"<<endl;
	cin>>ra>>ca;
	int a[ra][ca];
	cout<<"Enter the elements of the matrix:"<<endl;
	for(int i=0;i<ra;i++) 
	for(int j=0;j<ca;j++) 
	cin>>a[i][j]; 
	int w,s[ra][ca];
	cout<<"Please enter the number:"<<endl;
	cin>>w; 
	cout<<"The addition is:"<<endl; 
	for(int i=0;i<ra;i++) 
	for(int k=0;k<ca;k++)
	{
	s[i][k]=a[i][k]+w; 
	cout<<s[i][k]<<endl;
	}
	}
	Matrix Matrix::subtractScalar()
	{
	int ra,ca; 
	cout<<"Enter rows and coloumns:"<<endl;
	cin>>ra>>ca;
	int a[ra][ca];	
	cout<<"Enter the elements of the matrix:"<<endl;
	for(int i=0;i<ra;i++) 
	for(int j=0;j<ca;j++) 
	cin>>a[i][j]; 
	int w,s[ra][ca];
	cout<<"Please enter the number:"<<endl;
	cin>>w; 
	cout<<"The subtraction is:"<<endl;
	for(int i=0;i<ra;i++) 
	for(int k=0;k<ca;k++)
	{
	s[i][k]=w-a[i][k]; 
	cout<<s[i][k]<<endl;
	}
	}
	Matrix Matrix::multiplyScalar()
	{
	int ra,ca; 
	cout<<"Enter rows and coloumns:"<<endl;
	cin>>ra>>ca;
	int a[ra][ca];
	cout<<"Enter the elements of the matrix:"<<endl;
	for(int i=0;i<ra;i++) 
	for(int j=0;j<ca;j++) 
	cin>>a[i][j]; 
	int w,s[ra][ca];
	cout<<"Please enter the number:"<<endl;
	cin>>w; 
	cout<<"The multiplication is:"<<endl;
	for(int i=0;i<ra;i++) 
	for(int k=0;k<ca;k++)
	{
	s[i][k]=a[i][k]*w; 
	cout<<s[i][k]<<endl;
	}
	}
	Matrix Matrix::transpose()
	{
	int ra,ca; 
	cout<<"Enter rows and coloumns:"<<endl;
	cin>>ra>>ca;
	int a[ra][ca];
	cout<<"Enter the elements of the matrix:"<<endl;
	for(int i=0;i<ra;i++) for(int j=0;j<ca;j++) cin>>a[i][j]; 
	int w[ca][ra];
	cout<<"The transpose is:"<<endl;
	for(int i=0;i<ra;i++)
	for(int k=0;k<ca;k++)
	{
	cout<<a[k][i]<<endl;
	}
	} 
	bool Matrix::isSquare()
	{
	int ra,ca; 
	cout<<"Enter rows and coloumns:"<<endl;
	cin>>ra>>ca;
	cout<<(ra==ca);	//cout 1 if true and 0 if false
	} 
	bool Matrix::isIdentity()
	{
	int ca,ra;
	cout<<"Enter rows and coloumns:"<<endl;
	int x=10; 
	cin>>ra>>ca;
	int a[ra][ca];	
	if(ra==ca)
	{
	cout<<"Enter the elements of the matrix:"<<endl;
	for(int i=0;i<ra;i++) for(int j=0;j<ca;j++) cin>>a[i][j];
	for(int i=0;i<ra;i++)
	{
	for(int k=0;k<ca;k++)
	{
	if(a[i][i]==1) //all element is the pricipal diagonal =1
	{
	if(a[i][k]==0 && i!=k)//other elements =0
	cout<<(x==10);	
	break;
	}
	else
	{
	cout<<(x!=10); //cout 1 if true and 0 if false
	break;
	}
	}
	}
	}
	else 
	cout<<"Error,The rows and coloumns should be equal"<<endl;
	}
	void  PrintMatrix() 
	{
		int row,col;
		int** data=new int*[row];
		cout<<"Enter rows and coloumns:"<<endl;
		cin>>row>>col;
		Matrix();
		cout<<"matrix:"<<endl;
		for(int i=0;i<row;i++)
		for(int j=0;j<col;j++) 
		cout<<data[i][j];
	}
	Matrix::~Matrix()
	{delete []data;}
