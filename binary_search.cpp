#include<iostream>
using namespace std;
int binary_search(int a[],int n,int key){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    int n,key;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the value you want to search in array:"<<endl;
    cin>>key;
    cout<<"The element you are searching is at "<<binary_search(a,n,key)<<"th position."<<endl;
    return 0;
}