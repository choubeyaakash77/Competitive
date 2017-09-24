/**************************************************************************************************
*
*   In Byteland they have a very strange monetary system.
*   Each Bytelandian gold coin has an integer number written on it. A coin n can be
*   exchanged in a bank into three coins: n/2, n/3 and n/4. But these numbers are all
*   rounded down (the banks have to make a profit).
*   You can also sell Bytelandian coins for American dollars. The exchange rate is 1:1.
*   But you can not buy Bytelandian coins.
*   You have one gold coin. What is the maximum amount of American dollars you can get for it?
*
*   Input Format
*       The input will contain several test cases (not more than 10). Each testcase is a
*       single line with a number n. It is the number written on your coin.
*
*   Constraints
*       0 <= n <= 1 000 000 000.
*
*   Output Format
*       For each test case output a single line, containing the maximum amount of American
*       dollars you can make.
*
*   Sample Input
*       1
*       2
*   Sample Output
*       2
*   Explanation
*       If you try changing the coin 2 into 3 smaller coins, you will get 1, 0 and 0, and
*       later you can get no more than 1 out of them. It is better just to change the 2
*       coin directly into 2.
*
**************************************************************************************************/

#include <iostream>
using namespace std;

unsigned long long divideCoin(unsigned long long n){
    unsigned long long a,b,c,aa,bb,cc;
    a=n/2;
    b=n/3;
    c=n/4;
    // Base
    //cout<<"n/2="<<a<<" n/3="<<b<<" n/4="<<c<<endl;
    //cout<<"sum="<<a+b+c<<endl;
    if(a==0 || b==0 || c==0){
        return n;
    }
    // Rec Case
    if((a+b+c)>n){
        aa=divideCoin(a);
        bb=divideCoin(b);
        cc=divideCoin(c);
        if((aa+bb+cc)>n){
            return (aa+bb+cc);
        } else {
            return (a+b+c);
        }
    }

    return 0;
}

int main() {
    long T;
    cin>>T;
    while(T--){
        unsigned long long n;
        cin>>n;
        cout<<divideCoin(n)<<endl;
    }
    return 0;
}
