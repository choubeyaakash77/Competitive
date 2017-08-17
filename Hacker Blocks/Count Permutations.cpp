#include<iostream>
#include<string>
#include<set>
using namespace std;

void printPermutation(string input,set<string> &output,int i=0){
    if(input[i]=='\0'){
        output.insert(input);
        return;
    }
    ///Otherwise ?
    for(int j=i;input[j]!='\0';j++){
    	//cout<<input[i]<<input[j]<<endl;
        swap(input[i],input[j]);
        printPermutation(input,output,i+1);

        ///Backtrack to restore the original array
        swap(input[i],input[j]);
    }

}

int main(){
    string input;
    set<string> output;
    set<string>::iterator i;
    cin>>input;
    printPermutation(input,output);
    for(i=output.begin(); i!=output.end(); i++)
    	cout<<*i<<endl;

}
