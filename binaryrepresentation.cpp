//Given a positive integer, print its binary representation.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        string str="";
        if(n==0){
            str='0';
        }
        else{
          while(n>0){
            str=to_string(n%2)+str;
            n=n/2;
          }
        }
        cout<<str<<endl;
    }
    return 0;
}
