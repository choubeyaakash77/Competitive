/************************************************************************
*
*   Replace all occurrences of 3.14 with pi
*
*   Input Format:
*       Integer N, no of lines with one string per line
*   Constraints:
*       0 < N < 1000
*       0 <= len(str) < 1000
*   Output Format:
*       Output result one per line
*   Sample Input:
*       3
*       x3.14x
*       xab3.1xxpix
*       x3.14 3.14 3.14xx
*   Sample Output:
*       xpix
*       xab3.1xxpix
*       xpi pi pixx
*
************************************************************************/

#include<iostream>
#include<stdio.h>
using namespace std;

void replacePi(char str[],int i)
{
	// Base Case
	if(str[i]=='\0')
		return;
	// Rec Case
	//cout<<str[i]<<endl;
	if(str[i]=='3' && str[i+1]=='.' && str[i+2]=='1' && str[i+3]=='4')
	{
		int j=i;
		str[j++] = 'p';
		str[j++] = 'i';
		while(str[j]!='\0')
		{
			str[j] = str[j+2];
			j++;
		}
		str[j] = '\0';
	}
	replacePi(str,i+1);
}

int main()
{
	int n;
	char c,str[1001];
	cin>>n;
	for(int i=0;i<n; i++){
		if((c=getchar())!='\n'){
		    ungetc(c,stdin);
		}
		gets(str);
		replacePi(str,0);
		puts(str);
	}
	return 0;
}
