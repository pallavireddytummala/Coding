//Given an array, you have to find the frequency of a number x.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
    int n;
    cin>>n;
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        map[x]++;
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        if(map.find(x)!=map.end())
            cout<<map[x]<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0;
}
