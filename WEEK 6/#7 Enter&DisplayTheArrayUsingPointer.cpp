// Write a program for reading elements using a pointer into an array and display the values using an array.
// i. Declare a set of elements.
// ii. Declare the pointer and initialize it to the first element address of a set of elements(array).
// ii. Repeat the loop until the pointer reaches to the last element and displays each element

#include<iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"Enter the number of elements in the array : ";
	cin>>n;
	
	int array[n]; // declear an array to store elements
	int *ptr = array; // Declare the pointer and initialized it to the first element address
	
	for(int i=1; i<=n; i++)
	{
		cout<<"Enter element "<<i<<" : ";
		cin>>*ptr;
		ptr++;
	}
	
	ptr = array; // resetting the pointer last location.
	// display the elements:
	cout<<"Your entered elements are : "<<endl;
	for(int i=1; i<=n; i++)
	{
		cout<<*ptr<<" ";
		ptr++;
	}
	
	return 0;
}

