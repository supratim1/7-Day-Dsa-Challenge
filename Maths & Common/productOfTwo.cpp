#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int m;cin>>m;
    int d1=0;int d2=0;int sum=0;int p=0;
    while(n>0){
        d1=n%10;
        d2=m%10;
        p=d1*d2;
        sum += p;
        n=n/10;
        m =m/10;
        p=0;
    }
    cout<<sum;    
}