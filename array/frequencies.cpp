#include <iostream>
#include<bits/stdc++.h>
using namespace std;

/* C++ Function to print leaders in an array */
void frequency(int arr[], int size)
{
	unordered_map<int, int> m;

    for(int i=0;i<size;i++){
        m[arr[i]]++;
    }
    for(auto x: m){
        cout<<x.first<<" "<<x.second<<endl;
    }
}

/* Driver program to test above function*/
int main()
{
	int arr[] = {16, 16, 3, 3, 5, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	frequency(arr, n);
	return 0;
}
