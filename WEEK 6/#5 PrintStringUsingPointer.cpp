// Write a C++ Program for Print String Using Pointer:

#include<iostream>
using namespace std;
int main()
{
	string s = "Hello world";
	string *ptr = &s;
	
	cout<<"Here is your string : "<<*ptr;
	
	return 0;
}

