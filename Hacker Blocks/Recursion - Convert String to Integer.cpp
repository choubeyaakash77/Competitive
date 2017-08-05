/*****************************************************************************************************
*
*   Take as input str, a number in form of a string.
*   Write a recursive function to convert the number in string form to number in integer form.
*   E.g. for “1234” return 1234. Print the value returned.
*
*   Input Format:
*       Enter a number in form of a String
*   Constraints:
*       None
*   Output Format:
*       Print the number after converting it into integer
*   Sample Input:
*       1234
*   Sample Output:
*       1234
*
*****************************************************************************************************/

#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;

int strToInt(char input[], int i, int n){
	// Base Case
	if(i==n-1)
		return (input[i] - '0');

	// Rec Case
	return pow(10,n-i-1)*(input[i] - '0') + strToInt(input,i+1,n);
}

int main()
{
	char input[100];
	cin>>input;
	cout<<strToInt(input,0,strlen(input));
	return 0;
}
