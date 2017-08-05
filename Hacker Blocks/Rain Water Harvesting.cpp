/*****************************************************************************************************************************
*
*   Apoorvaa has created an elevated roof. She wants to know how much water can she save during rain.
*   Given n non negative integers representing the elevation map where width of every bar is 1.
*   Find the maximum water that she can save.
*   Explanation for the Sample input Testcase:
*   So the total units of water she can save is 5 units
*
*   Input Format:
*       First line contains an integer n. Second line contains n space separated integers representing the elevation map.
*   Output Format:
*       Print a single integer containing the maximum unit of waters she can save.
*   Sample Input:
*       10
*       0 2 1 3 0 1 2 1 2 1
*   Sample Output:
*       5
*   Time Limit: 1 sec
*
*****************************************************************************************************************************/

#include <iostream>
using namespace std;

int min(int &a, int &b){
	return (a<b?a:b);
}

int rwh(int a[],int n){
	int ans=0,left[n],right[n],max=0;;
	// Calculate highest on left of each element
	for(int i=0; i<n; i++){
		if(a[i]>max)
			max = a[i];
		left[i] = max;
	//	cout<<left[i]<<" ";
	}
	//cout<<endl;
	max = 0;
	// Calculate highest on right of each element
	for(int i=n-1; i>=0; i--){
		if(a[i]>max)
			max = a[i];
		right[i] = max;
	//	cout<<right[i]<<" ";
	}
	//cout<<endl;
	for(int i=0; i<n; i++){
		ans += min(left[i],right[i]) - a[i];
	}
	return ans;
}

int main()
{
	int n;
	cin>>n;
	int *a = new int[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	//cout<<"____\n";
	cout<<rwh(a,n);
	return 0;
}
