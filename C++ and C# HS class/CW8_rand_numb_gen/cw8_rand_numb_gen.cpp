#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;
int main() 
{
	srand(time(NULL)); 
	int i = rand() % 1000
		+ 1;
	cout<<"Random Number: ";
	cout<<i;
	cin.get();
} 




