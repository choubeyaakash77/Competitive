/***************************************************************************************************************************
*
*   Prateek Bhayia likes to play with bits. One day Prateek bhayia decides to assign a task to his student Sanya.
*   You have help Sanya to complete this task. Task is as follows - Prateek Bhayia gives Q queries.
*   Each query containing two integers a and b. Your task is to count the no of set-bits in for all numbers
*   between a and b (both inclusive).
*
*   Input Format:
*       Read Q - No of Queries, Followed by Q lines containing 2 integers a and b.
*   Constraints:
*       Q,a,b are integers.
*   Output Format:
*       Q lines, each containing an output for your query.
*   Sample Input:
*       2
*       1 1
*       10 15
*   Sample Output:
*       1
*       17
*
***************************************************************************************************************************/

#include <iostream>
using namespace std;

int calcBits(int n){
	int s=0;
	while(n){
		if(n&1)
			s++;
		n >>= 1;
	}
	return s;
}

int main()
{
	int Q;
	cin>>Q;
	while(Q--){
		int a,b,c=0;
		cin>>a>>b;
		for(int i=a; i<=b; i++)
			c+= calcBits(i);
		cout<<c<<endl;
	}
	return 0;
}