#include<iostream>

using namespace std;

class test {
	int a,b;
	public:
		void show(int a,int b)
		{
			this->a=a;
			this->b=b;
			
		}
		void display()
		{
			cout<<"A VALUE IS "<<a<<endl<<"B VALUE IS "<<b<<endl;
		}
};
int main()
{
	test t;
	t.show(10,20);
	t.display();
	
	return 0;
}
