/********************************************************************************************************
*
*	Take as input a two-d array. Spiral print it clockwise.
*
*	Input Format:
*		Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).
*	Constraints:
*		Both M and N are between 1 to 10.
*	Output Format:
*		All M * N integers seperated by commas with 'END' wriiten in the end(as shown in example).
*	Sample Input:
*		4 4
*		11 12 13 14
*		21 22 23 24
*		31 32 33 34
*		41 42 43 44
*	Sample Output:
*		11, 12, 13, 14, 24, 34, 44, 43, 42, 41, 31, 21, 22, 23, 33, 32, END
*
********************************************************************************************************/

#include <iostream>
using namespace std;

int m,n,i,arr[10][10],c=0,b=0;

void printCol(int rowFrom, int rowTo, int col){
    if(c==b){
        return;
    } else {
        c++;
    }
    if(rowFrom<rowTo){
        for(int i=rowFrom; i<=rowTo; i++){
	        cout<<arr[i][col]<<", ";
        }
    } else {
        for(int i=rowFrom; i>=rowTo; i--){
	        cout<<arr[i][col]<<", ";
        }
    }
};

void printRow(int colFrom, int colTo, int row){
    if(c==b){
        return;
    } else {
        c++;
    }
    if(colFrom<colTo){
        for(int j=colFrom; j<=colTo; j++){
	        cout<<arr[row][j]<<", ";
        }
    } else {
        for(int j=colFrom; j>=colTo; j--){
	        cout<<arr[row][j]<<", ";
        }
    }
};


int main() {
	cin>>m>>n;
	for(int i=0; i<m; i++)
	    for(int j=0; j<n; j++)
	        cin>>arr[i][j];
	        
	if(m>=n)
	    b=m+n-1;
	else
	    b=m+m-1;
	/*// Row Wise Print
	for(int i=0; i<m; i++){
	    printRow(0,n-1,i);
	}
	cout<<"END"<<endl;
	c=0;
	// Column Wise Print
	for(int j=0; j<n; j++){
	    printCol(0,m-1,j);
	}
	cout<<"END"<<endl;
	c=0;*/
	// Spiral ClockWise Print
	i=0;
	while(c!=b){
	    printRow(i,n-i-1,i);
    	printCol(i+1,m-i-1,n-i-1);
    	printRow(n-i-2,i,m-i-1);
    	printCol(m-i-2,i+1,i);
    	i++;
	}
	cout<<"END";
	/*cout<<endl<<c;*/
	return 0;
}