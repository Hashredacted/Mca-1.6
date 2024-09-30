// Write a C++ Program for Increment and Decrement Integer Using Pointer.

#include<iostream>
using namespace std;
int main()
{
	int num = 100;
	int *ptr = &num;
	
	cout<<"Original value : "<<*ptr<<endl;
	
	// Increment
	(*ptr)++;
	cout<<"After increment : "<<*ptr<<endl;
	
	// Decrement
	(*ptr)--;
	cout<<"After decrement : "<<*ptr<<endl;
	
	return 0;
}

