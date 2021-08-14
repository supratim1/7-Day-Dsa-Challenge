#include<bits/stdc++.h>
using namespace std;

string pallin(string s){
    string p=s;
    reverse(p.begin(),p.end());
    if(s==p){
        return "yes";
    }
    else{
        return "no";
    }
}
int main(){
    string s ="malayalam";
    cout<<pallin(s);
}