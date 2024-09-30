
// Write a C++ program to reverse a string using pointers.

#include<iostream>
using namespace std;
int main()
{
	char str[100];
	
	cout<<"Enter your string please : ";
	cin.getline(str, 100);
	
	int len = 0;
    	while (str[len] != '\0') len++;

	
	char *start = str;
	char *end = str + len - 1;
	
	while(start<end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		*start++;
		*end--;
	}
	
	cout<<endl<<"Your reverse string is : "<<str;
	
	return 0;
}
