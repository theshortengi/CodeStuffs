#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
srand(time(NULL));
int number=rand()%100+1;
int guess;
cout<<"I'm thinkin of a number between 1-100 and I ain't gonna let ya pass til ya guess it.  Take a guess Matey: ";
cin>>guess; 
while(guess!=number)
{
if(guess>number)
{
cout<<"Arg! Too high!: ";
cin>>guess;
} 
if(guess<number)
{
cout<<"Aye! Too low!: ";
cin>>guess;
}
}
if(guess==number)
{ 
cout<<"Ya Got It! Ye be free to roam the seven seas! Enjoy yer time! ";
cin.get();
}
cin.get();
}