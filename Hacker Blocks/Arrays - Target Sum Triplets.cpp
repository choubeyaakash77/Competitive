/***********************************************************************************
*
*   Take as input N, the size of array.
*   Take N more inputs and store that in an array.
*   Take as input “target”, a number.
*   Write a function which prints all triplets of numbers which sum to target.
*
*   Constraints:
*       Length of Array should be between 1 and 1000.
*   Sample Input:
*       9
*       5
*       7
*       9
*       1
*       2
*       4
*       6
*       8
*       3
*       10
*   Sample Output:
*      1, 2 and 7
*       1, 3 and 6
*       1, 4 and 5
*       2, 3 and 5
*
***********************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,*arr,target,sum,size;
    cin>>n;
    arr = new int[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cin>>target;
    sort(arr, arr+n);
    for(int i=0; i<n; i++) {
        sum = 0;
        for(int j=i+1; j<n; j++) {
            for(int k=j+1; k<n; k++) {
                sum = arr[i] + arr[j] + arr[k];
                if(sum == target) {
                    cout<<arr[i]<<", "<<arr[j]<<" and "<<arr[k]<<endl;
                }
            }
        }
    }
    return 0;
}
