/*****************************************************************************************
*
*   Print all permutations of a given string.
*   Only one permutation should be printed in one line.
*
*   Constraints:
*       1 < len(str) < 20
*   Explanation: Hint : Recursion can return all permutation of the smaller string.
*   Try to fix the beginning element and call ur recursive function.
*   Also, there should be no repetitions.
*
*****************************************************************************************/

#include<iostream>
#include <string>
#include <set>
using namespace std;

void printPermutation(string s,set<string> &ss, int i=0){
    if(s[i]=='\0'){
        ss.insert(s);
        return;
    }
    ///Otherwise
    for(int j=i;s[j]!='\0';j++){
    	//cout<<input[i]<<input[j]<<endl;
        swap(s[i],s[j]);
        printPermutation(s,ss,i+1);

        ///Backtrack to restore the original array
        swap(s[i],s[j]);
    }

}

int main(){
    string s;
	set<string> ss;
	set<string>::iterator i;
    cin>>s;
    printPermutation(s,ss);
    for (i=ss.begin(); i!=ss.end(); i++)
        cout<<*i<<endl;
    return 0;
}
