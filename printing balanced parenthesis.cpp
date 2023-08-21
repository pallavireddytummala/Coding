//Write a program to generate all possible strings with balanced paranthesis having N pairs of curly braces.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void solve(char ch[],int n, int op,int cc, int idx){
    if(idx==n){
        for(int i=0;i<n;i++){
            cout<<ch[i];
        }cout<<endl;
    }
    if(op<n/2){
        ch[idx]='{';
        solve(ch,n,op+1,cc,idx+1);
    }
    if(cc<op){
        ch[idx]='}';
        solve(ch,n,op,cc+1,idx+1);
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char ch[2*n];
        int op=0,cc=0,idx=0;
        solve(ch,2*n,op,cc,idx);
    }
    return 0;
}
