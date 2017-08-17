/*****************************************************************************
*
*   Take N as input. Print all fibonnaci numbers less than equal to N.
*
*   Constraints:
*       0 < N <= 1000
*   Sample Input:
*       6
*   Sample Output:
*       0
*       1
*       1
*       2
*       3
*       5
*
*****************************************************************************/

#include<iostream>
using namespace std;

void fib(int n,int a,int b)
{
	// Base Case
	if(a>n)
		return;

	// Rec Case
	int temp=a+b;
	cout<<a<<endl;
	a = b;
	b = temp;
	fib(n,a,b);
}

int main()
{
	int n;
	cin>>n;
	fib(n,0,1);
	return 0;
}
