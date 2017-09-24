/*****************************************************************************************************
*
*   Chef develops his own program for playing chess.At first he needs to write the module that
*   will receive moves written by the players.The module will receive a string and it should report
*   at first whether this string represents the correct pair of cells on the chess board and then
*   report whether it represents the correct move depending on the situation on the chess board.
*   So at first he needs a test program that can say whether a given string is correct and then
*   whether it represents a correct knight move (irregardless of the situation on the chess board).
*   The cell on the chessboard is represented as a string of two characters: first character is a
*   lowercase Latin letter from a to h and the second character is a digit from 1 to 8. The string
*   represents the correct pair of cells on the chess board if it composed of 5 characters where
*   first two characters represent the cell where chess figure was, 3rd character is the dash "-"
*   and the last two characters represent the destination cell.
*
*   Input Format
*       The first line contains a single integer T <= 50000, the number of test cases. T test
*       cases follow. The only line of each test case contains a non-empty string composed the
*       characters with ASCII-codes from 32 to 126.
*
*   Constraints
*       The length of the string is not greater than 10.
*
*   Output Format
*       For each test case, output a single line containing the word "Error" if the corresponding
*       string does not represent the correct pair of cells on the chess board. Otherwise output "Yes"
*       if this pair of cells represents the correct knight move and "No" otherwise.
*
*   Sample Input
*       4
*       a1-b3
*       d2-h8
*       a3 c4
*       ErrorError
*   Sample Output
*       Yes
*       No
*       Error
*       Error
*
*****************************************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main() {
    long T;
    cin>>T;
    cin.ignore();
    while(T--){
        string S;
        bool error=false,correct=false;
        int len,i;
        getline(cin,S);
        //check length
        len = S.length();
        if(len!=5){
            error=true;
        } else {
            //check input
            if(((S[0]>=97)&&(S[0]<=104))&&((S[1]>=49)&&(S[1]<=56))&&(S[2]==45)&&((S[3]>=97)&&(S[3]<=104))&&((S[4]>=49)&&(S[4]<=56))){
                // All Good
                if((S[3]-S[0])==2){
                    if((S[4]-S[1])==1){
                        correct=true;
                    }
                }
                if((S[3]-S[0])==1){
                    if((S[4]-S[1])==2){
                        correct=true;
                    }
                }
            } else {
                error=true;
            }
        }
        if(error){
            cout<<"Error"<<endl;
        } else if(correct){
            cout<<"Yes"<<endl;
        } else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
