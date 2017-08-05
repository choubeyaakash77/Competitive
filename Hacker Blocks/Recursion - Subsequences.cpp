/****************************************************************************************************************************
*
*   Take as input str, a string. We are concerned with all the possible subsequences of str.
*   E.g.
*   a. Write a recursive function which returns the count of subsequences for a given string.
*       Print the value returned.
*   b. Write a recursive function which prints all possible subsequences for a
*       “abcd” has following subsequences “”, “d”, “c”, “cd”, “b”, “bd”, “bc”, “bcd”, “a”, “ad”, “ac”, “acd”, “ab”,
*       “abd”, “abc”, “abcd”.given string (void is the return type for function).
*
*   Input Format:
*       Enter a string
*   Constraints:
*       None
*   Output Format:
*       Display the total no. of subsequences and also print all the subsequences in a space separated manner
*   Sample Input:
*       abcd
*   Sample Output:
*       16
*       d c cd b bd bc bcd a ad ac acd ab abd abc abcd
*   Time Limit: 4 sec
*
****************************************************************************************************************************/

#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;

void findSubsequences(char input[], char output[], int i, int j)
{
	// Base Case
	if(input[i] == '\0'){
		output[j] = '\0';
		cout<<" "<<output;
		return;
	}

	// Rec Case
	// 1.Exclude the ith char
	findSubsequences(input,output,i+1,j);

	// 2.Include the ith char
	output[j] = input[i];
	findSubsequences(input,output,i+1,j+1);
}

int main()
{
	char input[100];
	char output[100];
	cin>>input;
	int n = strlen(input);
	cout<<pow(2,n)<<endl;
	findSubsequences(input,output,0,0);
	return 0;
}
