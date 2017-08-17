/*******************************************************************************
*
*   We are given a hashmap which maps all the letters with number.
*   Given 1 is mapped with A, 2 is mapped with B.....26 is mapped with Z.
*   Given a number, you have to print all the possible strings.
*
*   Input Format:
*       A single line contains a number.
*   Constraints:
*       Number is less than 10^6
*   Output Format:
*       Print all the possible strings in sorted order in different lines.
*   Sample Input:
*       123
*   Sample Output:
*       ABC
*       AW
*       LC
*   Explanation: '1' '2' '3' = ABC '1' '23' = AW '12' '3' = LC
*   Time Limit: 1 sec
*
*******************************************************************************/

#include<iostream>
using namespace std;

void printString(char *input, char *output, int i, int j)
{
	// Base Case
	if(input[i]=='\0'){
		output[j] = '\0';
		cout<<output<<endl;
		return;
	}

	// Take 1 char at a time
	int digit = input[i] - '0';
	int ch = 64 + digit;			// ch = 'A' + digit - 1
	output[j] = ch;
	printString(input,output,i+1,j+1);

	// Take 2 char at a time
	if(input[i+1] != '\0'){
		int secondDigit = input[i+1] - '0';
		int no = digit*10 + secondDigit;
		if(no <= 26){
			ch = 64 + no;
			output[j] = ch;
			printString(input,output,i+2,j+1);
		}
	}
}

int main()
{
	char input[10];
	char output[10];
	cin>>input;
	printString(input,output,0,0);
	return 0;
}
