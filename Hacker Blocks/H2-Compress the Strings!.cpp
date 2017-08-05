/***********************************************************************************************************************
*
*   You will be given N strings which one or more repeated characters.
*   You have to print the character once. If it occurs repeatedly, print the number of times it has occured.
*
*   Input Format:
*       Line 1 : N, the number of strings Next N lines follows one string per line.
*   Constraints:
*       0 < N < 1000
*       1 < N < 10^6
*   Output Format:
*       N compressed strings one per line.
*   Sample Input:
*       2
*       aaabbcddd
*       abcddaa
*   Sample Output:
*       a3b2cd3
*       abcd2a2
*
***********************************************************************************************************************/

#include <iostream>
#include <string>
using namespace std;

string itoa(int c){
	int rem;
	string num;
	while(c){
		rem = c%10;
		c = c/10;
		num += (rem + '0');
	}
	if(num.size()>1){
		// Reverse num
		string res;
		string::reverse_iterator rit;
		for(rit=num.rbegin(); rit!=num.rend(); rit++)
			res += *rit;
		return res;
	}
	return num;
}

int main()
{
	int N;
	cin>>N;
	while(N--){
		string input,output;
		cin>>input;
		for(int i=0; i<input.size(); i++){
			output+=input[i];
			int c=0;
			while(input[i+1]==output.at(output.size()-1)){
				c++;
				i++;
			}
			if(c){
				output += itoa(c+1);
			}
		}
		cout<<output<<endl;
	}
	return 0;
}
