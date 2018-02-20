#include <iostream> 
#include <vector>
#include <algorithm>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {

srand(time(NULL));
int a=rand()%100+1;//generates random number a
int b=rand()%100+1;//generates random number b
int c=rand()%100+1;//generates random number c

vector <int> v;//declares vector
vector <int> :: iterator it;//declares iterator

v.push_back(a);//puts a into the vector
v.push_back(b);//puts b into the vector
v.push_back(c);//puts c into the vector

cout<<"The Vector:"<<endl;//outputs the vector
for(it=v.begin(); it != v.end(); it++) {
	cout<<(*it)<<endl;}

cout<<"The size of the vector is: ";//outputs the vector's size 
cout<<v.size()<<endl;

cout<<"The capacity of the vecor is: ";//outputs the vector's copacity 
cout<<v.capacity()<<endl;

reverse(v.begin(), v.end());//reverses the vector

cout<<"The Reverse Itetator:"<<endl;//outputs the reverse vector
for(it=v.begin(); it != v.end(); it++) {
	cout<<(*it)<<endl;}
cin.get();//waits for user to press enter
return 0;//says the program ran as expected
}