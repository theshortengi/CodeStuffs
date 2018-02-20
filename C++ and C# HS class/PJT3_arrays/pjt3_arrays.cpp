#include <iostream>
using namespace std; 
int main()
{
int a;
int b;
int c;

cout<<"Please enter a first number: ";
cin>>a;
cin.ignore();

cout<<"Please enter a second number: ";
cin>>b;
cin.ignore();

cout<<"Please enter a third number: ";
cin>>c;
cin.ignore();

	int awesome [3] = { a, b, c };
	int d = awesome [0] * awesome [1] * awesome [2];
	cout<<"This is the product of the three numbers you entered: ";
	cout<< d;
	cin.get();
	return 0;
}