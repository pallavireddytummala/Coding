//Count the number of trailing 0s in factorial of a given number.
#include<iostream>
using namespace std;
int main(){

long long int n;
cin>>n;
long long int count=0;
while (n >= 5) {
        n /= 5;
        count += n;
  }
  cout<<count<<endl;
return 0;
}
