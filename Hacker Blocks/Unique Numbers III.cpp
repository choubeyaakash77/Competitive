/*********************************************************************************************
*
*   We are given an array containg n numbers. All the numbers are present thrice
*   except for one number which is only present once. Find the unique number.
*   Use - Bitwise operators only, and no extra space.
*
*   Input Format:
*       First line contains the number n. Second line contains n space separated number.
*   Constraints:
*       N < 10^5
*   Output Format:
*       Output a single line containing the unique number
*   Sample Input:
*       7
*       1 1 1 2 2 2 3
*   Sample Output:
*       3
*   Explanation: 3 is present only once
*   Time Limit: 1 sec
*
*********************************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

/* Algo
*	1. n = 1
*	2. Loop from 0 to max-element-size
*	3. sum of each array element & n
*	4. sum%3 if not 0 -> add to final num
*	5. left shift n. Go to 2
*/

int nonRep3(vector<int> &a){
	int n = a.size(),num=0,sum,x;
	for(int i=0; i<31; i++){
		sum=0;
		x = 1<<i;
		for(int j=0; j<n; j++)
			if(a[j]&x)
				sum++;
		if(sum%3)
			num |= x;
	}
	return num;
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
	cout<<nonRep3(a);
	return 0;
}
