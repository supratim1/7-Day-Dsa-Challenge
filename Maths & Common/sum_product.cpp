#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int d=0;int sum=0;
    while(n>0){
        d=n%10;
        n=n/10;
        d=d*(n%10);
        sum += d;
    }
    cout<<sum;    
}