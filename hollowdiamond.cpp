//Print hollow diamond pattern using '*'
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
     for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        cout << "Case #" << i + 1 << ":" << endl;
        for(int i=1;i<=(n/2)+1;i++){
            for(int j=(n/2)+1;j>i;j--){
                cout<<" ";
            }
            cout<<"*";
            for(int j=1;j<((i-1)*2);j++){
                cout<<" ";
            }
            if(i==1)
                cout<<endl;
            else
                cout<<"*"<<endl;
        }
       for(int i=n/2;i>=1;i--){
           for(int j=(n/2)+1;j>i;j--){
                cout<<" ";
            }
            cout<<"*";
            for(int j=1;j<((i-1)*2);j++){
                cout<<" ";
            }
            if(i==1)
                cout<<endl;
            else
                cout<<"*"<<endl;           
       }
    }
    return 0;
}
