#include<bits/stdc++.h>
using namespace std;

int [] rotate(int arr[],int d){
    int size = a.size();
    int newa[size];
    int i=0;
    int rotateIndex=d;
    while(rotateIndex<size){
        newa[i]=arr[rotateIndex];
        i++;
        rotateIndex++;
    }
    rotateIndex=0;
    while(rotateIndex<d){
        newa[i]=arr[rotateIndex];
        i++;
        rotateIndex++;
    }
    return newa;
}
void printArray(int arr[])
{
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
}
int main(){
    int arr[]={1,2,3,4,5};
    int d=2;
    rotate(arr,d);
    printArray(arr);
}