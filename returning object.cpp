#include<iostream>
using namespace std;
class add
{
	public:
		int x;
		int set()
		{
			cout<<"enter value";
			cin>>x;
	    }
	    friend add sum(add);
        
        int disp()
        {
        	cout<<"value of x="<<x;
		}
}
{
	add a3;
	a3.x=a1.x+a2.x;
	
	return a3;
}
int main()
{
	add a1,a2,a3
	
	a1.set();
	a2.set();
	a3=sum(a1,a2)
	
	a3 disp();
}
