/**************************************************************************************
*
*   For a positive integer n let's define a function f:
*   f(n)=-1+2-3+..+(-1)^n*n
*   Your task is to calculate f(n) for a given integer n.
*
*   Input Format:
*       The first line contains an integer N , the no. of testcases .The next N lines contain the positive integer n
*   Constraints:
*       (1 ≤ n ≤ 10^15)
*   Output Format:
*       Print f(n) in a single line.
*   Sample Input:
*       2
*       5
*       4
*   Sample Output:
*       -3
*       2
*
**************************************************************************************/

#include <iostream>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		long long n;
		cin>>n;
		cout<<(n&1?-1*(n/2+1):n/2)<<endl;
	}
	return 0;
}
