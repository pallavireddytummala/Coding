//Given a number, swap the adjacent bits in the binary representation of the number, and print the new number formed after swapping.
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int result=0;
        for(int i=0;i<30;i=i+2){
            int a=(n>>i)&1;
            int b=(n>>(i+1))&1;
            result=result+(a<<(i+1))+(b<<i);
        }
        cout<<result<<endl;
    }
    return 0;
}
