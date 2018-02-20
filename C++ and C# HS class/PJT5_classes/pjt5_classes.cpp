#include <iostream>
using namespace std;
class Rectangle 
{
public:
	Rectangle();
	~Rectangle();
		float x;
		float y;
		float area();
		float perimeter();
};
Rectangle::Rectangle()
{
}
Rectangle::~Rectangle()
{
}
float Rectangle::area()
{
	return (x*y);
}
float Rectangle::perimeter()
{
	return ((2*x)+ (2*y));
}
int main () {
	Rectangle r;
	cout << "Please enter in the rectangle width: ";
	cin>>r.x;
	cout << "Please enter in the rectangle heighth: ";
	cin>>r.y;
	cin.ignore();
  cout << "area: " <<r.area()<< endl;
  cout << "perimeter: "<<r.perimeter()<< endl;
  cin.get();
  return 0;
}