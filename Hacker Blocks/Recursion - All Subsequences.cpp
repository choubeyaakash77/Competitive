#include<iostream>
#include<string>
#include<set>
using namespace std;

void findSubsequences(string input,string o,set<string> &output, int i, int j)
{
	// Base Case
	if(input[i] == '\0'){
		//cout<<"fn-"<<o<<" size="<<o.size()<<endl;
		output.insert(o);
		return;
	}
	
	// Rec Case
	// 1.Include the ith char
	o += input[i];
	//cout<<"\no += input["<<i<<"] = "<<input[i]<<";\n"<<o<<endl;
	findSubsequences(input,o,output,i+1,j+1);
	
	o.erase(o.end()-1);
	// 2.Exclude the ith char
	//cout<<"\ninput["<<i<<"] = "<<input[i]<<";\n"<<endl;
	findSubsequences(input,o,output,i+1,j);
}

int main()
{
	int N;
	string input,o;
	set<string> output;
	set<string>::iterator i;
	cin>>N;
	while(N--){
		cin>>input;
		findSubsequences(input,o,output,0,0);
		for(i=output.begin(); i!=output.end(); i++)
			cout<<*i<<endl;
		output.erase(output.begin(),output.end());
	}
	return 0;
}
