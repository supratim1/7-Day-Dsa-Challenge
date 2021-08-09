#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int k; cin>>k;
    string num = to_string(n);
    string first,last;
    first = num[k-1];
    int len = num.length();
    last = num[len-k];
    cout<<"last = "<<last<<endl;
    cout<<"first = "<<first<<endl;

}