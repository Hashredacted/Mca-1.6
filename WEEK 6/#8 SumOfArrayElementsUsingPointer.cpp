// Write a program through a pointer variable to the sum of n elements from the array.

#include<iostream>
using namespace std;
int main()
{
	int n, sum = 0;
	
	cout<<"Enter the length of your array : ";
	cin>>n;
	
	int array[n];
	int *ptr = array;
	
	for(int i=1; i<=n; i++)
	{
		cout<<"Enter element "<<i<<" : ";
		cin>>*ptr;
		sum += *ptr;
		ptr++;
	}
	
	cout<<endl;
	cout<<"The sum of "<<n<<" elements of your array is : "<<sum;
	return 0;
}

