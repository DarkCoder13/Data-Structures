//print all the possible subarray of an array
//input-first line size of array
//next lines elements of array
//output-subarray
//eg-3
//1,2,3
//output-1,[1,2],[1,2,3],[2],[2,3],[3]
#include<iostream>
using namespace std;
void sub_array(int a[],int n){
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            for(k=i;k<=j;k++){
                cout<<"["<<a[k]<<"]";
            }
            cout<<endl;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sub_array(a,n);
    return 0;
}