/*****************************************************************************************
*
*   Take as input S, a string. Write a function that does basic string compression.
*   Print the value returned. E.g. for input “aaabbccds” print out a3b2c2d1s1.
*
*   Input Format:
*       A single String S
*   Constraints:
*       1 < = length of String < = 100
*   Output Format:
*       The compressed String.
*   Sample Input:
*       aaabbccds
*   Sample Output:
*       a3b2c2d1s1
*   Explanation: In the given sample test case 'a' is repeated 3 times consecutively,
*   'b' is repeated twice, 'c' is repeated twice and 'd and 's' occurred only once.
*
*****************************************************************************************/

#include <iostream>
using namespace std;

int main() {
    char input[101],output[101],c;
    char tens='0', count='1';
    int i,j;
    cin>>input;
    for(i=0,j=0; input[i]!='\0'; i++) {
        c = input[i];
        if(i>0){
            if(output[j-1] == c) {
                count++;
                if(count > '9') {
                    tens ++;
                    count = '0';
                }
            } else {
                if(tens == '0') {
                    output[j] = count;
                } else {
                    output[j] = tens;
                    j++;
                    tens = '0';
                    output[j] = count;
                }
                j++;
                count = '1';
                output[j] = c;
                j++;
            }
        } else {
            output[j] = c;
            j++;
        }
    }
    if(tens == '0') {
        output[j] = count;
    } else {
        output[j] = tens;
        j++;
        tens = '0';
        output[j] = count;
    }
    output[j+1] = '\0';
    cout<<output;
    return 0;
}
