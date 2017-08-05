/******************************************************************************************************************************
*
*   Take as input str, a number in form of a string. Write a recursive function to find the sum of digits in the string.
*   Print the value returned.
*
*   Input Format:
*       Enter the number
*   Constraints:
*       None
*   Output Format:
*       Display the sum of the digits
*   Sample Input:
*       1234
*   Sample Output:
*       10
*
******************************************************************************************************************************/

#include<iostream>
using namespace std;

long digSum(char s[],int i)
{
	if(s[i]=='\0')
		return 0;
	return ((int)s[i]-48)+digSum(s,i+1);
}

int main()
{
	char s[100];
	cin>>s;
	cout<<digSum(s,0);
	return 0;
}
