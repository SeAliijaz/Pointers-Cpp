#include<iostream>
using  namespace std;

int main(){
	///Declaring variables
	///Storing values in it according to data type
	string name = "Ali ijaz";
	int age = 19;
	
	///Pointers
	int *ptrAge = &age;
	string *ptrName = &name;
	
	///Output to get address
	cout<<"The Address of Age is : "<<ptrAge;
	cout<<"\nThe Address of Name is : "<<ptrName;
	
	///Actual Data
	cout<<"\nThe Value of Name is : "<<*ptrName;
	cout<<"\nThe Value of Age is : "<<*ptrAge;

	
}
