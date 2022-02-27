#include<iostream>
using namespace std;

int main(){
	
	string word;
	
	cout<<"Enter Alphabet : ";
	cin>>word;
	
	string *ptrWord = &word;
	
	if(*ptrWord ==  "a" || *ptrWord == "A" ||*ptrWord ==  "e" || *ptrWord == "E" ||*ptrWord ==  "i" || *ptrWord == "I" ||*ptrWord ==  "o" || *ptrWord == "O" ||*ptrWord ==  "u" || *ptrWord == "U"){
	cout<<word<<" is a Alphabet";
	}
	else{
		cout<<"Not alphabet";
	}	
}
