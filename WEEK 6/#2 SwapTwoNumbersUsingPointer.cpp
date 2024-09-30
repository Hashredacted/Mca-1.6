// Write a C++ Program for Swap Numbers Using Pointers: 

#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	
	cout<<"Enter first number : ";
	cin>>num1;
	cout<<"Enter second number : ";
	cin>>num2;
	
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	
	cout<<"Your first number is : "<<*ptr1<<endl;
	cout<<"Your second number is : "<<*ptr2;
	
	return 0;
}

