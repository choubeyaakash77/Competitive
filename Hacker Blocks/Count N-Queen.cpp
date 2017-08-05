/***************************************************************************************************************
*
*   You are given an empty chess board of size N*N.
*   Find the number of ways to place N queens on the board, such that no two queens
*   can kill each other in one move. A queen can move vertically, horizontally and diagonally.
*
*   Input Format:
*       A single integer N, denoting the size of chess board.
*   Constraints:
*       1<=N<=11
*   Output Format:
*       A single integer denoting the count of solutions.
*   Sample Input:
*       4
*   Sample Output:
*       2
*
***************************************************************************************************************/

#include <iostream>
using namespace std;
int count = 0;

void print(bool board[][10],int n)
{
	for(int i=0; i<n; i++){
		for(int j=0; j<n;j++){
			cout<<(board[i][j]?'Q':'.')<<" ";
		}
		cout<<endl;
	}
}

bool canPlace(bool board[][10],int row,int col,int n){
	// Check Row
	int x=row,y=0;
	while(y<n){
		if(board[x][y]){
			return false;
		}
		y++;
	}
	// Check Diagonal
	x=row,y=col;
	// Top Left
	while(x>=0 && y>=0){
		if(board[x][y]){
			return false;
		}
		x--;
		y--;
	}
	// Bottom Left
	x=row; y=col;
	while(x<=n && y>=0){
		if(board[x][y]){
			return false;
		}
		x++;
		y--;
	}
	return true;
}

bool solveNQueen(bool board[][10],int i,int n){
	// Base Case
	if(i==n){
		count++;
		return true;
	}

	// Rec Case
	for(int j=0; j<n; j++){
		if(canPlace(board,j,i,n)){
			board[j][i] = 1;
			solveNQueen(board,i+1,n);
			board[j][i] = 0;
		}
	}
	return false;
}

int main()
{
	bool board[10][10] = {0};
	int n;
	cin>>n;
	count = 0;
	solveNQueen(board,0,n);
	cout<<count;
	return 0;
}
