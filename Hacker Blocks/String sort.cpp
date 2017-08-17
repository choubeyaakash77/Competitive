/************************************************************************************
*
*   Nishant is very naughty boy in Launchpad Batch.
*   One day he was playing with strings, and randomly shuffled them all.
*   Your task is to help Nishant Sort all the strings ( lexicographically )
*   but if two strings have a common part, then string with
*   longer length should come first. Eg bat ,batman are 2 strings have
*   common part as bat - then sorted order should have - batman, bat.
*
*   Input Format:
*       N(integer) followed by N strings.
*   Constraints:
*       N<=1000
*   Output Format:
*       N lines each containing one string.
*   Sample Input:
*       3
*       bat
*       apple
*       batman
*   Sample Output:
*       apple
*       batman
*       bat
*
************************************************************************************/

#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n,j;
    string s;
    set<string> strings;
    string *result = NULL;
    set<string>::iterator i;
    cin>>n;
    for(j=0; j<n; j++){
        cin>>s;
        strings.insert(s);
    }
    result = new string[n];
    for(j=0,i=strings.begin(); i!=strings.end(); j++,i++) {
        result[j] = *i;
        if(j>0) {
            // Check if common
            if(result[j].find(result[j-1]) != string::npos)
                result[j].swap(result[j-1]);
        }
    }
    for(j=0; j<n; j++) {
        cout<<result[j]<<endl;
    }
    return 0;
}
