/*******************************************************************************************************************
*
*   Take as input N, a number. Write a recursive function to find Nth triangle where 1st triangle is 1,
*   2nd triangle is 1 + 2 = 3, 3rd triangle is 1 + 2 + 3 = 6, so on and so forth. Print the value returned.
*
*   Input Format:
*       Integer N is the single line of input.
*   Constraints:
*       1 <= N <= 100
*   Output Format:
*       Print the output as a single integer which is the nth triangle.
*   Sample Input:
*       3
*   Sample Output:
*       6
*
*******************************************************************************************************************/

#include<stdio.h>

void nthTriangle(int n,int sum){
    // Base Case
    if(n==1){
        sum++;
        printf("%d",sum);
        return;
    }
    // Rec Case
    sum += n;
    nthTriangle(n-1,sum);
}

int main() {
    int n;
    scanf("%d",&n);
    nthTriangle(n,0);
	return 0;
}
