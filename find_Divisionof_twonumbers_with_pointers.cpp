#include<iostream>
using namespace std;

int main(){
	int num1,num2;
	
	cout<<"Enter First Number : ";
	cin>>num1;
	
	cout<<"Enter Second Number : ";
	cin>>num2;
	
	int *ptrNum1 = &num1;
	int *ptrNum2 = &num2;
	
	int division = *ptrNum1 / *ptrNum2;
	
	cout<<"The Division is : "<<division;	
}
