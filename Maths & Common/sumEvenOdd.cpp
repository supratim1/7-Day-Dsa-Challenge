#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int d=0;
    int se=0;
    int so=0;
    while(n>0){
        d=n%10;
        if(d%2==0){
            se += d; 
        }
        else{
        so += d;}
        n=n/10;
    }
    cout<<se<<endl;    
    cout<<so<<endl;    
}