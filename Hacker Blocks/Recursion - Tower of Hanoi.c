/***********************************************************************************************************************************************
*
*   Using a helper stick (peg), shift all rings from peg A to peg B using peg C.
*   All rings are initally placed in ascending order, smallest being on top.
*   No bigger ring can be placed over a smaller ring.
*
*   Input Format:
*       N, no of rings
*   Constraints:
*       1 <= N <= 10
*   Output Format:
*       No of times ring needs to be transferred from one peg to another. Each line should follow format : Moving ring i from A/B/C to A/B/C
*   Sample Input:
*       4
*   Sample Output:
*       Moving ring 1 from A to C
*       Moving ring 2 from A to B
*       Moving ring 1 from C to B
*       Moving ring 3 from A to C
*       Moving ring 1 from B to A
*       Moving ring 2 from B to C
*       Moving ring 1 from A to C
*       Moving ring 4 from A to B
*       Moving ring 1 from C to B
*       Moving ring 2 from C to A
*       Moving ring 1 from B to A
*       Moving ring 3 from C to B
*       Moving ring 1 from A to C
*       Moving ring 2 from A to B
*       Moving ring 1 from C to B
*
***********************************************************************************************************************************************/

#include<iostream>
using namespace std;

void towerOfHanoi(int n,char src, char thru, char dest)
{
	if(n==0)
	{
		return;
	}
	towerOfHanoi(n-1,src,dest,thru);
	cout<<"Moving ring "<<n<<" from "<<src<<" to "<<dest<<endl;
	towerOfHanoi(n-1,thru,src,dest);
}

int main()
{
	int n;
	cin>>n;
	towerOfHanoi(n,'A','C','B');
	return 0;
}
