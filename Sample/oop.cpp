#include<bits/stdc++.h>
using namespace std;
class Birthday
{
private:
	int date;
	int month;
	int year;
public:
	void birthday(int d,int m,int y)
	{
		date=d;
		month=m;
		year=y;
	}
	void printdate();
};
void Birthday::printdate()
{
	cout<<date<<":"<<month<<":"<<year<<endl;
}
class People
{
private:
	string name;
	Birthday dob;
public:
	void people(string s,Birthday bd);
	void printinfo();
};
void People::people(string s,Birthday bd)
{
	name=s;
	dob=bd;
}
void People::printinfo()
{
	cout<<"Person name: "<<name;
	dob.printdate();
}
int main()
{
	Birthday b;
	b.birthday(2,6,1997);
	People one;
	one.people("yash",b);
	one.printinfo();
	return 0;
}