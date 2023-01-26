#include<iostream>
#include<string.h>
using namespace std;

class string
{
	char *p;
	int len;
	public:
		string()
		{
			len=0;
			p=0;
	    }
	    string(char *s)
	    {
	    	len=strlen(s);
	    	p = new char[len+1];
	    	strcpy(p,s);
		}
		~string()
		{
			delete p;
		}
		string operator +(const string &t)
		{
			string temp;
			temp.len=len+t.len;
			cout<<"The length of temp is:"<<temp.len<<endl;
			temp.p= new char[temp.len+1];
			strcopy(temp.p,p);
			strcat(temp.p, t.p);
			cout<<"The Value of string after con is:"<<temp.p<<endl;
			
		}
		
		display()
		{
			cout<<"The value of string is:"<<p<<endl;
		}
};
int main()
{
	string s1="hello";
	string s2="world";
	
	string s3;
	s3=s1+s2;
	s1.display();
	s2.display();
	s3.display();
	return 0;
}
