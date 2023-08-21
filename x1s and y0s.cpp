//Given two numbers X and Y, find the number whose binary representation has X 1's followed by Y 0's.
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
        int i,j;
        cin>>i>>j;
        cout<<(((1<<i)-1)<<j)<<endl;
    }
    return 0;
}
