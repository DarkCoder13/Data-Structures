#include<iostream>
#include<algorithm>
using namespace std;
void rotateimg(int a[][1000],int n){
	for(int i=0;i<n;i++){
		reverse(a[i],a[i]+n);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i<j){
				swap(a[i][j],a[j][i]);
			}
		}
	}
}
int main(){
	int n;
	cin>>n;
	int a[1000][1000];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	rotateimg(a,n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
