#include <iostream>
#include <ctime>
using namespace std;
int main(){
	system ("color 0A");
	int i, w, g, o, k, n, z, x;
	g = 1;
	o = 0;
	k = 0;
	z = 0;
	x = 0;
	int *p = 0;
	int *a = 0;

	cout<<"\n±±±±±±±±±±±±±±±±±±±±±±±±±     WELCOME TO MASTERMIND!     ±±±±±±±±±±±±±±±±±±±±±±±"<<endl;
	cout<<"________________________________________________________________________________"<<endl<<endl;

	cout<<"How many numbers do you want to generate?: ";
	cin>>i;
	p = new int [i];
	a = new int [i];
	cout<<"\n"<<"Okay so there are "<<i<<" numbers. All of these numbers are single digits: 0-9."<<endl;
	cout<<"\n"<<"If you decide to quit, enter all 0's as your guess to end the game."<<endl;

	while (k == 0){
		srand((unsigned)time(0));  
		for (n = 0; n<i; n++){
			p[n] = (rand()%10);
			//cout<<p[n];
			if (p[n] == 0){
				o = o + 1;
				}
		}
			k = 1;
			if (o == i){
				delete [] p;
				k = 0;}
	}


	cout<<"\nHere we go, give me "<<i<<" numbers: ";
	for (n = 0; n<i; n++){
		cin>>a[n];
	}
	
	do {
		w = 0;
		x = 0;
		for (n=0;n<i;n++){
			if (p[n] != a[n]){
				w= w+1;}
			if (a[n] == 0){
				x = x + 1;}
			}
		if (x == i){
			w = 0;
			z = 1;
		}
		if(w != 0){
			system ("color 40");
			cout<<"You have "<<w<<" numbers wrong. "<<i-w<<" of them are correct. \n\nTry again: ";
			g = g+1;
			for (n=0;n<i;n++){
				cin>>a[n];
				}
			}
	}
	while (w != 0);

	if (z == 0){
		system ("color 20");
		cout<<endl<<"Congratulations! You broke the code! You are a true mastermind!"<<endl<<endl;
		cout<<"It took you "<<g<<" tries to get it right."<<endl<<endl<<"Your ranking is: ";
		if (g <= 5) cout<<"Master Code Breaker!!!";
		else if (g <= 15) cout<<"Professional Hacker!!";
		else if (g <= 25) cout<<"Average Code Breaker. You can use some work.";
		else if (g <= 50) cout<<"You should try a different game... or less numbers.";
		else cout<<"Go home, you're just a failure at logic.";
	}
	else if (z == 1){
		system ("color 0A");
		system ("color 00");
		cout<<"\nToo hard for you? Well the answer was: ";
		for (n = 0; n<i; n++){
			cout<<p[n]<<" ";
		}
		cout<<"\n\nNext time don't be a quitter and just think harder.";
	}

	delete [] p;
	cin.get();
	cin.ignore();
	return 0;
}
	