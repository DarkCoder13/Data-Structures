#include<iostream>
using namespace std;
void spiral(int a[1000][1000],int m,int n){
    int startRow=0;
    int startCol=0;
    int endRow=m-1;
    int endCol=n-1;
    while(startRow<=endRow && startCol<=endCol){
        //first row ->->->-> direction
        for(int i=startCol;i<=endCol;i++){
            cout<<a[startRow][i]<<" ";
        }
        startRow++;
        //last coloumn
        for(int i=startRow;i<=endRow;i++){
             cout<<a[i][endCol]<<" ";
        }
        endCol--;
        //bottom row <-<-<-<-<-
         if(endRow>startRow){
             for(int i=endCol;i>=startCol;i--){
                 cout<<a[endRow][i]<<" ";
        }
        endRow--;
        }
        //first coloumn
        if(endCol>startCol){
            for(int i=endRow;i>=startRow;i--){
                cout<<a[i][startCol]<<" ";
        }
        startCol++;
        }
    }
}
int main(){
    cout<<"Enter the number of rows and coloumn of Matrix: ";
    int m,n;
    cin>>m>>n;
    int a[1000][1000];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"The Matrix is:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Spiral form of matrix is:"<<endl;
    spiral(a,m,n);
    return 0;
}