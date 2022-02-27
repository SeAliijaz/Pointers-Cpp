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
	
	if(*ptrNum1 > *ptrNum2){
		cout<<"Number "<<*ptrNum1<<" is Greater than Number"<<*ptrNum2;
	}else if(*ptrNum2 > *ptrNum1){
		cout<<"Number "<<*ptrNum2<<" is Greater than Number"<<*ptrNum1;
	}else{
		cout<<"Wrong Implementation";
	}
}
