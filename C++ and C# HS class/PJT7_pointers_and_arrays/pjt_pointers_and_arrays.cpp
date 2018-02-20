#include <iostream>
using namespace std;
int main()
{
int a;
int b;
int c;
int d; 
int e;
int lastvalue;
int * mypointer;

cout<<"Please enter a first number: ";
cin>>a;
cin.ignore();

cout<<"Please enter a second number: ";
cin>>b;
cin.ignore();

cout<<"Please enter a third number: ";
cin>>c;
cin.ignore();

cout<<"Please enter a fourth number: ";
cin>>d;
cin.ignore();

cout<<"Please enter a fifth number: ";
cin>>e;
cin.ignore();

mypointer = &lastvalue;
*mypointer = e;

	int awesome [] = { a, b, c, d, e };
	int f = awesome [0] * awesome [1] * awesome [2] * awesome [3] * awesome [4];
	cout<<"This is the product of the five numbers you entered: ";
	cout<< f << endl;
	cout<<"This is the last number you entered: " ;
	cout<< lastvalue;
	cin.get();
	return 0;


}