/********************************************************************************************************************************
*
*   Take N (number in binary format). Write a function that converts it to decimal format. Print the value returned.
*
*   Constraints:
*       0 < N <= 1000000000
*   Sample Input:
*       101010
*   Sample Output:
*       42
*
********************************************************************************************************************************/


#include <stdio.h>
#include <math.h>
#include <string.h>

int binToDec(char N[],int i,int n){
	//int x = (N[i]=='1'?1:0)*pow(2,n-i);
    //printf("N[%d] = %c\t num = %d\n",i,N[i],x);
	// Base Case
    if(i==n){
    	return (N[i]=='1'?1:0);
    }
    // Rec Case
    return (N[i]=='1'?1:0)*pow(2,n-i) + binToDec(N,i+1,n);
}

int main() {
    char N[20];
    scanf("%s",N);
    printf("%d",binToDec(N,0,strlen(N)-1));
    return 0;
}
