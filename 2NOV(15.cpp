#include<iostream>

using namespace std;

class string{
	private:
		int length;
		char *str;
		public:
			string()
			{
				length=0;
				str=new char[length+1];
			}
			string(char *s)
			{
				length=strlen(s);
				str=new char[length+1];
				strcpy(str,s);
			}
			friend string operator +(string &s1,string &s2);
			friend void show(string &s);
};
void show(string &s)
{
	cout<<s.str<<endl;
}

string operator +(string &s1,string &s2)
{
	string temp;
	temp.length();
}
void main()
{
	
	
	
	
	
}
