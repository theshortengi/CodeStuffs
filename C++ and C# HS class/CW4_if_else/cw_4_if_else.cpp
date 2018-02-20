#include <iostream>
using namespace std; 
int main(){
	cout<<"Please input your age: ";
	int x;	
	cin>> x;	
	cin.ignore ();	
	if (x < 50) {
		cout<<"You're pretty young.\n";

	}
	if (x == 50){
		cout<<"You're over the hill now.\n";
	}
	if (x > 50) {
		cout<<"You're on old geiser.\n";
	}
	cin.get();
}