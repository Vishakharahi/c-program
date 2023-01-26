#include<iostream>
using namespace std;
class student
{
	private:
	    char firstname[20];
	    char lastname[20];
		char coursename[20];
		int spuidnumber; 
		int roll;
	public:
		void getdata();
		void display()
		{
			cout<< "FirstName: "<< firstname << endl;
			cout<< "LastName: "<< lastname << endl;
			cout<< "Coursename: "<< coursename << endl;
			cout<< "Spuidnumber"<< spuidnumber << endl;
			cout<< "Roll: "<< roll << endl;
		}
};
void student ::getdata(void)
{
	cout << "Enter FirstName: ";
	cin >> firstname;
	cout << "Enter LastName: ";
	cin >> lastname;
	cout << "Enter Coursename: ";
	cin >> coursename;
	cout << "Enter Spuidnumber: ";
	cin >> spuidnumber;
	cout << "Enter Roll: ";
	cin >> roll;
}
int main()
{
	student stu;
	stu.getdata();
	stu.display();
	return 0;
}
