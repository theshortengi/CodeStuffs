#include <iostream>
using namespace std;
int main ()
{
int x;
int y;
cin>>x;
cin>>y;
for (int i=1; i<101; i++)
 if (i % x == 0 && i % y == 0)
	 cout<<i<<' ';
cin.get();
cin.get();
}