#include<iostream>
using namespace std;
class A
{
	public:
		friend int disp();
};
int disp()
{
	cout<<"hello friend function";
}
int main()
{
	disp();
	return 0;
}


