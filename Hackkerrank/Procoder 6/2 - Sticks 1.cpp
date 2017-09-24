/*********************************************************************************************************************************
*
*   Chef and his little brother are playing with sticks. They have total N sticks. Length of i-th stick is Ai.
*   Chef asks his brother to choose any four sticks and to make a rectangle with those sticks its sides.
*   Chef warns his brother to not to break any of the sticks, he has to use sticks as a whole. Also, he wants
*   that the rectangle formed should have the maximum possible area among all the rectangles that Chef's brother can make.
*
*   Chef's little brother takes this challenge up and overcomes it. Can you also do so? That is, you have to tell whether
*   it is even possible to create a rectangle? If yes, then you have to tell the maximum possible area of rectangle.
*
*   Input Format
*       The first line contains a single integer T denoting the number of test-cases. T test cases follow.
*       The first line of each test case contains a single integer N denoting the number of sticks.
*       The second line of each test case contains N space-separated integers A1, A2, ..., AN denoting the lengths of sticks
*
*   Constraints
*       1 ≤ T ≤ 100
*       1 ≤ N ≤ 10^3
*       1 ≤ sum of N's over all test-cases in a single test file ≤ 10^3
*       1 ≤ Ai ≤ 10^3
*
*   Output Format
*       For each test case, output a single line containing an integer representing the maximum possible area for rectangle
*       or -1 if it's impossible to form any rectangle using the available sticks.
*
*   Sample Input
*       2
*       5
*       1 2 3 1 2
*       4
*       1 2 2 3
*   Sample Output
*       2
*       -1
*   Explanation
*   Example case 1. Chef's brother can choose sticks of lengths 1, 2, 1, 2. He can create a rectangle with area 1 * 2 = 2.
*   Example case 2. It's impossible to choose 4 sticks so that they form a rectangle.
*
*********************************************************************************************************************************/


#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int i,j,N;
	    cin>>N;
	    int *a = new int[N];
	    int *pairs = new int[N];
	    for(i=0; i<N; i++){
	        cin>>a[i];
	        pairs[i] = -1;
	    }
	    sort(a,a+N);
	    /*for(i=0; i<N; i++){
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;*/
	    // Find Pairs
	    for(i=0,j=0; i<N-1; i++){
	        if(a[i]==a[i+1]){
	            pairs[j] = a[i];
	            i++;
	            j++;
	        }
	    }
	    /*for(i=0; pairs[i]!=-1; i++)
	        cout<<pairs[i]<<" ";
	    cout<<endl;*/
	    if(j<2){
	        cout<<-1<<endl;
	    } else {
	        cout<<pairs[j-1]*pairs[j-2]<<endl;
	    }
	}
	return 0;
}
