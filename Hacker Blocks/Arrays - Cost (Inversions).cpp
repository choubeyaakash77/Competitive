/**********************************************************************************************************
*
*   Cost of an array A, here, is the number of pairs i and j (i < j), such that Ai > Aj.
*   Determine the cost of the given array A of N elements.
*
*   Input Format:
*       First line contains number of test cases, T.
*       First line of each test case contains and integer N,
*       denoting the number of elements int the array A.
*       Second line of each test case contains N integers,
*       denoting the elements of the array A.
*   Constraints:
*       1<=T<=10
*       1<=N<=10^5
*       |Ai|<=10^9
*   Output Format:
*       Print the cost of the array for each test case.
*   Sample Input:
*       2
*       5
*       2 0 0 0 0
*       8
*       8 7 6 5 4 3 2 1
*   Sample Output:
*       4
*       28
*   Explanation: In first test case, pair of (i,j), i<j,
*       for which Ai > Aj are (1,2),(1,3),(1,4),(1,5).
*
**********************************************************************************************************/


#include <iostream>
using namespace std;

int inversions(long a[], int n) {
    int count=0,i,j;
    for(i=0; i<n-1; i++){
        for(j=i; j<n; j++)
            if(a[i]>a[j])
                count++;
    }
    return count;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        long *a = new long [n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        cout<<inversions(a,n)<<endl;
    }
    return 0;
}
