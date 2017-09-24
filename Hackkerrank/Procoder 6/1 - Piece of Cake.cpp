/*************************************************************************************************************
*
*   You are given a string. Your task is to determine whether number of occurrences of some character
*   in the string is equal to the sum of the numbers of occurrences of other characters in the string.
*
*   Input Format
*       The first line of the input contains an integer T denoting the number of test cases.
*       Each of the next T lines contains one string S consisting of lowercase latin letters.
*
*   Constraints
*       1 ≤ T ≤ 1000
*       1 ≤ length of S ≤ 50
*
*   Output Format
*       For each test case, output a single line containing "YES" if the string satisfies the
*       condition given above or "NO" otherwise.
*
*   Sample Input
*       2
*       acab
*       zzqzqq
*   Sample Output
*       YES
*       YES
*
*   Explanation
*       1)Occurences of a=2,sum of Occurences of b and c=2,hence yes.
*       2)Occurences of z=3,sum of Occurences of q=3,hence yes.
*
*************************************************************************************************************/

#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    char S[51],key;
	    int count,max=0,i;
	    cin>>S;

	    for(i=0; S[i]!='\0'; i++){
	        key = S[i];
	        count=1;
	        for(int j=i+1; S[j]!='\0'; j++){
	            if(S[i]==S[j])
	                count++;
	        }
	        if(count>max){
	            max = count;
	        }
	    }

	    //cout<<max<<endl;
	    if(max*2==i){
	        cout<<"YES\n";
	    } else {
	        cout<<"NO\n";
	    }
	}
	return 0;
}
