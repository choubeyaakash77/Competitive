/******************************************************************************************************************
*
*   Take as input N, the size of array. Take N more inputs and store that in an array.
*   Write a recursive function which bubble sorts the given array. Print all the values in the sorted array.
*
*   Input Format:
*       Enter a number N and input N more numbers and store it in the array
*   Constraints:
*       None
*   Output Format:
*       Display the values of the sorted array
*   Sample Input:
*       3
*       3
*       2
*       1
*   Sample Output:
*       1 2 3
*
******************************************************************************************************************/

#include <iostream>
using namespace std;

void bubbleSort(int a[],int n){
	// Base Case
	if(n==1){
		return;
	}
	// Rec Case
	for(int i=0; i<n-1; i++){
		if(a[i]>a[i+1]){
			a[i] = a[i] + a[i+1];
			a[i+1] = a[i] - a[i+1];
			a[i] = a[i] - a[i+1];
		}
	}
	bubbleSort(a,n-1);
}

int main()
{
	int N;
	cin>>N;
	int *a = new int(N);
	for(int i=0; i<N; i++)
		cin>>a[i];
	bubbleSort(a,N);
	for(int i=0; i<N; i++)
		cout<<a[i]<<" ";
	return 0;
}
