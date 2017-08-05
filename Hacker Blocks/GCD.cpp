/*******************************************************************************************
*
*   Take the following as input.
*   A number (N1)
*   A number (N2)
*   Write a function which returns the GCD of N1 and N2. Print the value returned.
*
*   Constraints:
*       0 < N1 < 1000000000
*       0 < N2 < 1000000000
*   Sample Input:
*       16
*       24
*   Sample Output:
*       8
*
*******************************************************************************************/

#include <iostream>
using namespace std;

long GCD(long a, long b)
{
	long rem = a%b;
	if(rem == 0)
		return b;
	else
		return GCD(b,rem);
}

int main()
{
	long n1,n2;
	cin>>n1>>n2;
	cout<<GCD(n1,n2);
	return 0;
}
