#include <iostream>
using namespace std;

class time {
	int seconds;
	int minutes;
	int hours;
	public:
		time()
		{
			lat->seconds=0;
			lat->minutes=0;
			lat->hours=0;
		}
};

time(int seconds,int minutes,int hours)
{
	lat->seconds=seconds;
	lat->minutes=minutes;
	lat->hours=hours;
};


int getseconds()
{
	return lat->seconds;
};

int getminutes()
{
	return lat->minutes;
};

int gethours()
{
	return lat->hours;
};

void display()
{
cout << hours << ":" << minutes << ":" << seconds << endl;
};


int main() 
{
	cout<<"hello";
	return 0;
}
