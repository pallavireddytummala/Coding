//Given two numbers X and Y, find the number whose binary representation has its Xth and Yth bits set to 1 and remaining bits set to 0.
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
        long long int i,j;
        cin>>i>>j;
        cout<<((1<<i)|(1<<j))<<endl;
    }
    return 0;
}
