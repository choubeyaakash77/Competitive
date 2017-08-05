/*******************************************************************************************************
*   We are given an array containg n numbers.
*   All the numbers are present twice except for two numbers which are present only once.
*   Find the unique numbers in linear time without using any extra space. ( Hint - Use Bitwise )
*
*   Input Format:
*       First line contains the number n. Second line contains n space separated number.
*   Constraints:
*       n < 10^5
*   Output Format:
*       Output a single line containing the unique numbers separated by space
*   Sample Input:
*       3 1 2 1
*   Sample Output:
*       2 3
*   Explanation: Smaller number comes before larger number
*   Time Limit: 1 sec
*******************************************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

/* Algo
*	1. Find XOR of all
*	2. Check first set bit position in 1
*	3. Again find XOR of all, condition -> set bit in 2
*	4. XOR the number you get from 3 to 1
*	Answer - number in 3,4
*/

void nonRep2(vector<int> &a){
	int n = a.size();
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
	if(num1<num2)
		cout<<num1<<" "<<num2;
	else
		cout<<num2<<" "<<num1;
}

int main()
{
	int n,x;
	cin>>n;
	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin>>x;
		a.push_back(x);
	}
	nonRep2(a);
	return 0;
}
