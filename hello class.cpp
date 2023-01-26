#include<iostream>
using namespace std;

class A
{
	public:
		void disp()
		{
			cout<<"helloclass";
		}
};

class B:private A
{
	public:
		void disp1()
		{
			disp();
		}
	
};
class C : public B
{
	public:
		void disp2()
		{
			disp();
		}
	
};
int main()
{
	B b1;
	b1.disp();
	c c1;
	cout<<endl;
	c1.disp();
	return 0;
}
