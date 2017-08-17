/***********************************************************************************************
*
*   Rahul had a sorted array of numbers from which he had to find a given number quickly.
*   His friend by mistake rotated the array. Now Rahul doesn't have time to sort the
*   elements again. Help him to quickly find the given number from the rotated array.
*
*   Input Format:
*       The first line contains N - the size of the array. the next N lines contain
*       the numbers of the array.The next line contains the item to be searched.
*   Output Format:
*       Output the index of the number in the array to be searched. output -1
*       if the number is not found.
*   Sample Input:
*       5
*       4
*       5
*       1
*       2
*       3
*       2
*   Sample Output:
*       3
*   Explanation: The given rotated array is [4, 5, 1, 2, 3].
*       The element to be searched is 2 whose index is 3.
*   Time Limit: 1 sec
*
***********************************************************************************************/


#include<iostream>
using namespace std;

int theMin = 0,minPos=0;

long binSearch(long a[],long m,long l,long r)
{
	if(r>=l)
	{
		long mid = l+(r-l)/2;
		//cout<<mid<<endl;
		// Base Case
		if(a[mid]==m)
			return mid;
		// Rec Case
		if(a[mid]>m){
			return binSearch(a,m,l,mid-1);
		} else {
			return binSearch(a,m,mid+1,r);
		}
	}
	return -1;
}

void findMin(long a[],int n){
    theMin = 999999;
    for(int i=0; i<n; i++)
        if(a[i]<theMin){
            theMin = a[i];
            minPos = i;
        }
}

int main()
{
	long n,i,m,out;
	cin>>n;
	long *a = new long [n];
	for(i=0; i<n; i++)
		cin>>a[i];
	cin>>m;
	findMin(a,n);
	out = binSearch(a,m,0,minPos);
	if(out==-1){
        out = binSearch(a,m,0,n);
        if(out<0)
            cout<<out;
        else
            cout<<(m<a[0]?out:out-minPos);
	} else {
	    cout<<out;
	}
	return 0;
}
