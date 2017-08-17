/*****************************************************************************************************
*
*   Take as input S, a string. Write a function that removes all
*   consecutive duplicates. Print the value returned. E.g. for input "aabccba" print "abcba".
*
*   Input Format:
*       String
*   Constraints:
*       A string of length between 1 to 1000
*   Output Format:
*       String
*   Sample Input:
*       aabccba
*   Sample Output:
*       abcba
*
*****************************************************************************************************/

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
    string input,output;
    cin>>input;
    for(int i=0; i<input.size(); i++){
        output+=input[i];
        int c=0;
        while(input[i+1]==output.at(output.size()-1)){
            c++;
            i++;
        }
    }
    cout<<output<<endl;
	return 0;
}
