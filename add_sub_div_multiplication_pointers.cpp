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
	
	int sum = *ptrNum1 + *ptrNum2;
	int sub = *ptrNum1 - *ptrNum2;
	int multiplication = *ptrNum1 * *ptrNum2;
	int division = *ptrNum1 / *ptrNum2;
	
	cout<<"\nThe Sum of "<<*ptrNum1<<" And "<<*ptrNum2<<" is : "<<sum;
	cout<<"\nThe Subtraction of "<<*ptrNum1<<" And "<<*ptrNum2<<" is : "<<sub;
	cout<<"\nThe Multiplication of "<<*ptrNum1<<" And "<<*ptrNum2<<" is : "<<multiplication;
	cout<<"\nThe Division of "<<*ptrNum1<<" And "<<*ptrNum2<<" is : "<<division;
}
