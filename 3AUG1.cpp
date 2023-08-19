#include <iostream>

using namespace std;
//inline function
inline rectangle(float length,float breadth)
{
	float area;
	area=(length*breadth);
	return area;
}
int main()
{
	float l,w,a;
	cin>>l>>w;
	a=rectangle(l,w);
	cout<<"Area :"<<a;
}
