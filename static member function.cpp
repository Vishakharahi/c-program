#include<iostream>
using namespace std;
class A
{
	public:
		static void disp();
};
int disp()
{
	cout<<"hello static function";
}
int main()
{
	disp();
	return 0;
}

