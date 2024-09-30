// Write a C++ Program to Print the address of the Variable Using a Pointer.

#include<iostream>
using namespace std;
int main()
{
	int x = 100;
	
	int *ptr = &x;
	
	cout<<"The address of variable 'x' is : "<<ptr;
	
	return 0;
}

