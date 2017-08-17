/****************************************************************************************************************************
*
*   Google Tower of Hanoi.
*   a. Write a recursive function which prints the steps required to solve the tower of Hanoi problem for N discs.
*   b. Write a recursive function which returns number of steps required to solve the tower of Hanoi problem for N discs.
*
*   Input Format:
*       Enter the number of discs
*   Constraints:
*       None
*   Output Format:
*       Display the steps required to solve the tower and also print the total number of steps required
*   Sample Input:
*       2
*   Sample Output:
*       Move 1th disc from T1 to T3
*       Move 2th disc from T1 to T2
*      Move 1th disc from T3 to T2
*       3
*
****************************************************************************************************************************/

#include<iostream>
#include<math.h>
using namespace std;

void towerOfHanoi(int n,char src[], char thru[], char dest[])
{
	if(n==0)
	{
		return;
	}
	towerOfHanoi(n-1,src,dest,thru);
	cout<<"Move "<<n<<"th disc from "<<src<<" to "<<dest<<endl;
	towerOfHanoi(n-1,thru,src,dest);
}

int main()
{
	int n;
	cin>>n;
	towerOfHanoi(n,"T1","T3","T2");
	cout<<(pow(2,n)-1);
	return 0;
}
