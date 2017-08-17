/***********************************************************************************************************
*
*   Given N numbers, calculate sum of their factorial modulo 107.
*
*   Input Format:
*       First line contains positive integer N and the next line contains N space separated integers.
*   Constraints:
*       N <= 10 and all integers lie between 0 and 20.
*   Output Format:
*       Output a single line denoting the result.
*   Sample Input:
*       3
*       3 4 5
*   Sample Output:
*       43
*   Explanation: 3! = 6 4! = 24 5! = 120 (6 + 24 + 120) % 107 = 43
*
***********************************************************************************************************/

#include <iostream>
using namespace std;

long long facts[21] = {1,0};

long long factorial(int n){
	if(facts[n]!=0)
	    return facts[n];
	facts[n] = n*factorial(n-1);
	return facts[n];
}

int main()
{
	int n;
	cin>>n;
	long long ans=0;
	int x;
	while(n--){
		cin>>x;
		ans += (factorial(x))%107;
	}
	cout<<ans%107;
	return 0;
}
