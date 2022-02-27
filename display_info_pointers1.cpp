#include<iostream>
using namespace std;
int main()
{
	string name;
	int rollNo;
	int marks;
	float avg;
	
	cout<<"Enter Your Name : ";
	cin>>name;
	
	cout<<"Enter Your Roll No : ";
	cin>>rollNo;
	
	cout<<"Enter Your Marks : ";
	cin>>marks;
	
	cout<<"Enter Your Percentage : ";
	cin>>avg;
	
	cout<<"\nYour Name is : "<<&name;
	cout<<"\nYour Roll No is : "<<&rollNo;
	cout<<"\nYour Marks is : "<<&marks;
	cout<<"\nYour Percantage is : "<<&avg;
}
