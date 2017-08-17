// Given an array where each number is repeating twice except two numbers. Find those numbers.
#include <iostream>
using namespace std;

/* Algo
*	1. Find XOR of all
*	2. Check first set bit position in 1
*	3. Again find XOR of all, condition -> set bit in 2
*	4. XOR the number you get from 3 to 1
*	Answer - number in 3,4
*/

void nonRep2(int a[],int n){
	int exor=0,num1,num2,chk;
	for(int i=0; i<n; i++)
		exor ^= a[i];
	chk=1;
	while(chk<=exor){
		if(exor&chk)
			break;
		chk<<=1;
	}
	num1 = 0;
	for(int i=0; i<n; i++)
		if(a[i]&chk)
			num1 ^= a[i];
	num2 = exor^num1;
	cout<<num2<<" "<<num1;
}

int main()
{
	int n;
	cin>>n;
	int *a = new int(n);
	for(int i=0; i<n; i++)
		cin>>a[i];
	nonRep2(a,n);
	return 0;
}
