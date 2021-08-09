#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(int arr[], int n){
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    for(auto x : s){
        cout<<x<<",";
    }
}
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    removeDuplicates(a,n);
}