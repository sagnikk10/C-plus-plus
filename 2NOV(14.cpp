#include<iostream>

using namespace std;

class complex{
	private:
		int real,img;
		public:
			complex(){}
			complex(int r,int i)
			{
				real=r,img=i;
			}
			void print()
			{
				cout<<real<<"+"<<img<<"i"<<endl;
			}
			void operator ++()
			{
				++real;
			}
			complex operator +(complex c)
			{
				complex temp;
				temp.real=real+c.real;
				temp.img=img+c.img;
				return temp;
			}
};
int main()
{
	complex c1(5,4);
	complex c2(2,5);
	complex c3;
	c3=c1+c2;
	c3.print();
	++c3;
	c3.print();
	
}
