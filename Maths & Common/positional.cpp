#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int d=0;int m=1;int r=0;
    while(n>0){
       d=n%10;
       r=d*m;
       cout<<r<<",";
       n=n/10;
       m=m*10;
    }   
}