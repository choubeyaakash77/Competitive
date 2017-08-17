/************************************************************
*
*   Take as input x and n, two numbers.
*   Write a function to calculate x raise to power n.
*   Target complexity is O(logn).
*
*   Input Format:
*       Enter the number N and its power P
*   Constraints:
*       None
*   Output Format:
*       Display N^P
*   Sample Input:
*       2
*       3
*   Sample Output:
*       8
*
************************************************************/

// O(log(n))
#include<iostream>
using namespace std;

int power(int a,int b)
{
	if(b==1)
		return a;
	if(b%2==0)
	{
		int x = power(a,b/2);
		return x*x;
	}
	else
	{
		int x = power(a,b/2);
		return a*x*x;
	}
}

int main()
{
	int n,p;
	cin>>n>>p;
	cout<<power(n,p);
	return 0;
}
