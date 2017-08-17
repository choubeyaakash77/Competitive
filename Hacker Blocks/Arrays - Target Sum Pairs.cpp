/*********************************************************************************
*
*   Take as input N, the size of array.
*   Take N more inputs and store that in an array.
*   Take as input “target”, a number.
*   Write a function which prints all pairs of numbers which sum to target.
*
*   Constraints:
*       Length of the arrays should be between 1 and 1000.
*   Sample Input:
*       5
*       1
*       3
*       4
*       2
*       5
*       5
*   Sample Output:
*       1 and 4
*       2 and 3
*
*********************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n,*arr,target,sum;
    cin>>n;
    arr = new int[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cin>>target;
    for(int i=0; i<n; i++) {
        sum = 0;
        for(int j=i+1; j<n; j++) {
            sum = arr[i] + arr[j];
            if(sum == target) {
                cout<<(arr[i]<arr[j]?arr[i]:arr[j])<<" and "<<(arr[i]>arr[j]?arr[i]:arr[j])<<endl;
            }
        }
    }
    return 0;
}
