#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int d=0;
    int max=0;
    int min=9;
    while(n>0){
        d=n%10;
        if(d>max){
            max=d;
        }
        if(d<min){
            min=d;
        }
        n=n/10;
    }
    cout<<max<<endl;    
    cout<<min<<endl;    
}