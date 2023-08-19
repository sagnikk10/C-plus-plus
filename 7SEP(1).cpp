#include <iostream>

using namespace std;

class a{
	public :
		int x;
};
class b:public a
{
	public :
		int y;
};



int main()
{
	b c;
	c.x=20;
	c.y=30;
	cout<<"\nmember of a is "<<c.x<<endl;
	cout<<"\nmember of b is "<<c.y<<endl;
	
}
