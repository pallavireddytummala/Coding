//Given 2 strings A and B, print all the interleavings of the 2 strings. 
//An interleaved string of given two strings preserves the order of characters in individual strings and uses all the characters of both the strings.
//For simplicity, you can assume that the strings have unique characters.
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void solve(string a,string b,string c,int ia,int ib){
    int n=a.size();
    int m=b.size();
    int q=c.size();
    if(ia>n || ib>m )
        return ;
     if(q==(m+n) ){
        cout<<c<<endl;
        return;
    }
    if(a[ia]<b[ib]){
        solve(a,b,c+a[ia],ia+1,ib);
        solve(a,b,c+b[ib],ia,ib+1);
    }
    else {
        solve(a,b,c+b[ib],ia,ib+1);
        solve(a,b,c+a[ia],ia+1,ib);
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        string a,b,c;
        cin>>a>>b;
        solve(a,b,c,0,0);
    }
    return 0;
}
