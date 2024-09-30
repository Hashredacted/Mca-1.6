// Write a C++ program to concatenate two strings using pointers:

#include<iostream>
using namespace std;
int main()
{
	string s1, s2;
	
	cout<<"Enter first string : ";
	cin>>s1;
	cout<<"Enter second string : ";
	cin>>s2;
	
	string *ptr1 = &s1, *ptr2 = &s2;
	
	cout<<endl<<"Concatenation under process..."<<endl;
	cout<<endl<<"Concatenated string is : "<<*ptr1 + *ptr2;
	
	return 0;
}

