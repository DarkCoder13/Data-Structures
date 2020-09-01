#include<iostream>
using namespace std;
void insertion_sort(int a[],int n){
    for(int i=1;i<=n-1;i++){
        int e=a[i];
        int j=i-1;
        while(j>=0 && a[j]>e){
            a[j+1]=a[j];
             j=j-1;
        }
        a[j+1]=e;
    }
}
int main(){
    int n;
    cin>>n;
    int a[10000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    insertion_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<",";
    }
    return 0;
}
//worst case time complexity of bubble sort is O(n^2)
//we can optimize it or improve time complexity
//for best case time complexity time complexity is O(n)
