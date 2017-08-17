/***********************************************************************************************
*
*   Piyush is lost in a magical park which contains N rows and M columns.
*   In order to get out of park safely and return home, he needs atleast
*   K amount of strength.Given a N by M pattern, your task is to find
*   weather Piyush can ever escape the park.
*
*   The pattern consisits of '.' , * and '#'.Intially the strength is S
*   and if Piyush encounters * , strength increases by 5.
*   If he encounters '.', strength decreases by 2.Please note that Piyush
*   can only walk row wise, so he starts from left of a row and moves
*   towards right and he does this for every row. If he encounters '#',
*   this means that the row is blcked and he cannot move forward.
*   Also while moving in a row, Piyush requires strength of 1 for
*   every step and strength should always be positive for moving forward.
*
*   Assume that Piyush can shift immediately from last of one row to the start
*   of next one without loss of any strength, help out Piyush to escape the park.
*
*
*   Input Format:
*       Four space separated integers N, M, K and S all lie between 0 and 100.
*       Next N lines contains M space separated characters which can be '.', '*' or '#'.
*   Constraints:
*       All numbers are positive and <= 100.
*   Output Format:
*       Print "Yes" or "No" depending on whether Piyush can escape or not.
*       If the answer is "Yes", also print the maximum strength that he can
*       gather in the park in a new line.
*   Sample Input:
*       4 4 5 20
*       . . * .
*       . # . .
*       * * . .
*       . # * *
*   Sample Output:
*       Yes
*       13
*
***********************************************************************************************/


#include <iostream>
using namespace std;

int main()
{
	int n,m,k,s,e=0;
	cin>>n>>m>>k>>s;

	// Declare nxm array
	char** park = new char*[n];
	for(int i=0; i<n; i++)
        park[i] = new char[m];

    // Input array
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>park[i][j];

    e = s;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(j>0)
                e--;
            if(park[i][j]=='.')
                e -= 2;
            else if(park[i][j]=='*')
                e += 5;
            else
                break;
        }
    }

    if(e>=k){
        cout<<"Yes\n"<<e;
    } else {
        cout<<"No";
    }

	return 0;
}
