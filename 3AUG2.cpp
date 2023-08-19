#include <iostream>

using namespace std;
//inline function SQUARE NUMBER
inline square(int n)
{
	int result;
	result=(n*n);
	return result;
}

int main()
{
	int n,r;
	cout<<"ENTER THE VALUE FOR SQUARE NUMBER :";
	cin>>n;
	r=square(n);
	cout<<"RESULT IS0 "<<r;
}
