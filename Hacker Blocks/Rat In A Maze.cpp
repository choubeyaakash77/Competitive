/***************************************************************************************************************
*
*   You are given an N*M grid. Each cell (i,j) in the grid is either blocked, or empty.
*   The rat can move from position (i,j), down or right on the grid.
*   Initially rat is on the position (1,1). It wants to reach position (N,M).
*   Find the rightmost path through which, rat can reach this position.
*   A path is rightmost, if the rat is at position (i,j), it will always move to (i+1,j),
*   if there exists a path from (i+1,j) to (N,M).
*
*   Input Format:
*       First line contains 2 integers, N and M, denoting the rows and columns in the grid.
*       Next N line contains. M characters each. An 'X' in position (i,j) denotes that the cell
*       is blocked and ans 'O' denotes that the cell is empty.
*   Constraints:
*       1<=N,M<=1000
*      GRID(i,j)='X' or 'O'
*   Output Format:
*       Print N lines, containing M integers each. A 1 at a position (i,j) denotes
*       that the (i,j)th cell is covered in the path and a 0 denotes that the cell is not covered in the path.
*   Sample Input:
*       5 4
*       OXOO
*       OOOX
*       OOXO
*       XOOO
*       XXOO
*   Sample Output:
*       1 0 0 0
*       1 1 0 0
*       0 1 0 0
*       0 1 1 1
*       0 0 0 1
*
***************************************************************************************************************/

#include <iostream>
#define size 1001
using namespace std;
int m,n;
char input;
bool maze[size][size];
bool sol[size][size];

bool solveMaze(int i, int j){
	// Base Case
	if(i==m && j==n){
		// Solved
		sol[i][j] = 1;
		for(int i=0; i<=m; i++){
			for(int j=0; j<=n; j++)
				cout<<sol[i][j]<<" ";
			cout<<endl;
		}
		//cout<<"Solved."<<endl;
		return true;
	}
	if(maze[i][j])
		return false;
	maze[i][j] = 1;
	// Rec Case
	sol[i][j] = 1;
	// 1. Move Right is possible
	if(j+1<=n && !maze[i][j+1]){
		bool path = solveMaze(i,j+1);
		if(path)
			return true;
	}
	// 2. Move Down
	if(i+1<=m && !maze[i+1][j]){
		bool path = solveMaze(i+1,j);
		if(path)
			return true;
	}
	sol[i][j] = 0;
	return false;
}

int main()
{
	cin>>m>>n;
	m--; n--;
	for(int i=0; i<=m; i++)
		for(int j=0; j<=n; j++){
			cin>>input;
			if(input=='X')
				maze[i][j] = 1;
		}
	/*
	cout<<"\nMaze"<<endl;
	for(int i=0; i<=m; i++){
		for(int j=0; j<=n; j++)
			cout<<maze[i][j]<<" ";
		cout<<endl;
	}
	*/
	bool ans = solveMaze(0,0);
	if(!ans)
		cout<<"-1";
	//cout<<"\nSolution"<<endl;
	return 0;
}
