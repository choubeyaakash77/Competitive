/************************************************************************************************************************************************
*
*   Given N positive numbers, your task is to calculate their HCF.
*
*   Input Format:
*       First line of input contains a single integer N, second line contains N space separated positive integers whose HCF is to be computed.
*   Constraints:
*       N <= 10 and all the numbers lie between 1 and 100.
*   Output Format:
*       Print HCF of N numbers.
*   Sample Input:
*       3
*       2 4 6
*   Sample Output:
*       2
*
************************************************************************************************************************************************/

#include <iostream>
using namespace std;

int GCD(int a, int b)
{
	int rem = a%b;
	if(rem == 0)
		return b;
	else
		return GCD(b,rem);
}

int findGCD(int a[],int n,int i=0){
	if(i==n-1){
		return a[i];
	}
	return GCD(a[i],findGCD(a,n,i+1));
}

int main()
{
	int n;
	cin>>n;
	int *a = new int(n);
	for(int i=0; i<n; i++)
		cin>>a[i];
	cout<<findGCD(a,n);
	return 0;
}
