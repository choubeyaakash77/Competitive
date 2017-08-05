/***************************************************************************************************************
*
*   Take as input N, the size of array. Take N more inputs and store that in an array.
*   Take as input a number M. Write a function which returns the index on which M is found in the array,
*   in case M is not found -1 is returned. Print the value returned.
*   You can assume that the array is sorted, but you’ve to optimize the finding process.
*   For an array of size 1024, you can make 10 comparisons at maximum.
*   1.It reads a number N.
*   2.Take Another N numbers as input in Ascending Order and store them in an Array.
*   3.Take Another number M as input and find that number in Array.
*   4.If the number M is found index of M is returned else -1 is returned.Print the number returned.
*
*   Constraints:
*       N cannot be Negative. Range of Numbers N and M can be between -1000000000 to 1000000000
*   Sample Input:
*       5
*       3
*       5
*       6
*       9
*       78
*       6
*   Sample Output:
*       2
*
***************************************************************************************************************/

#include<iostream>
using namespace std;

long binSearch(long a[],long m,long l,long r)
{
	if(r>=l)
	{
		long mid = l+(r-l)/2;
		//cout<<mid<<endl;
		// Base Case
		if(a[mid]==m)
			return mid;
		// Rec Case
		if(a[mid]>m){
			return binSearch(a,m,l,mid-1);
		} else {
			return binSearch(a,m,mid+1,r);
		}
	}
	return -1;
}

int main()
{
	long n,i,m;
	cin>>n;
	long *a = new long [n];
	for(i=0; i<n; i++)
		cin>>a[i];
	cin>>m;
	cout<<binSearch(a,m,0,n);
	return 0;
}
