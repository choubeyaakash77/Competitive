/**********************************************************************************************************
*
*   We are given two sorted arrays of same size n.
*   Find the median of the array formed after merging these two sorted arrays.
*
*   Input Format:
*       First line contains the input n. Second and Third line contains n space separated integers.
*   Constraints:
*       N < 1000
*   Output Format:
*       Print the median in a single line.
*   Sample Input:
*       5
*       1 3 5 7 9
*       2 4 6 8 10
*   Sample Output:
*       5
*   Explanation: Merged Array: [ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10] So the median element is 5
*
**********************************************************************************************************/

#include<iostream>
using namespace std;

int main()
{
	long n,i,j,k;
	cin>>n;
	long *a = new long [n];
	long *b = new long [n];
	long *c = new long [2*n];
	for(i=0; i<n; i++)
		cin>>a[i];
    for(i=0; i<n; i++)
		cin>>b[i];
    i=0; j=0; k=0;
    while(i<n && j<n){
        if(a[i]<b[j]){
            c[k++]=a[i++];
        } else {
            c[k++]=b[j++];
        }
    }
    while(i<n){
        c[k++]=a[i++];
    }
    while(j<n){
        c[k++]=b[j++];
    }
    cout<<c[n-1];
	return 0;
}
