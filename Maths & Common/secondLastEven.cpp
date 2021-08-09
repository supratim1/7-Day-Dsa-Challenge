#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int d=0;int c=0;
    while(n>0){
        d=n%10;
        if(d%2==0){
            ++c;
        }
        if(c==2){
            cout<<d;
            break;
        }
        n=n/10;
    }    
}