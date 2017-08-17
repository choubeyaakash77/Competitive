/**********************************************************************************************
*
*   Take N (number in decimal format). Write a function that converts it to octal format.
*   Print the value returned.
*
*   Constraints:
*       0 < N <= 1000000000
*   Sample Input:
*       63
*   Sample Output:
*       77
*
**********************************************************************************************/

#include<stdio.h>
int main() {
    unsigned long N;
    scanf("%lu",&N);
    printf("%o",N);
	return 0;
}
