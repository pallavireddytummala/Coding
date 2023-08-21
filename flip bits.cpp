//You are given two numbers A and B. Write a program to count the number of bits to be flipped to change the number A to the number B. 
//Flipping a bit of a number means changing a bit from 1 to 0 or vice versa.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        int c=a^b;
        int cnt=0;
        while(c>0){
            if(c%2==1)
                cnt++;
            c=c>>1;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
