//Read n followed by n string you have to print largest string and its sizeof
#include<iostream>
using namespace std;
#include<cstring>
int main(){
    int n;
    cin>>n;
    int len;
    int largest_len=0;
    char a[1000];
    char largest[1000];
    cin.get();
    for(int i=0;i<n;i++){
        cin.getline(a,1000);
        len=strlen(a);
        if(len>largest_len){
            largest_len=len;
            strcpy(largest, a);
        }
    }
    cout<<a<<" : and its length is : "<<largest_len<<endl;
    return 0;
}


output:---
3                                                                                                                                      
Krishna                                                                                                                                
Github                                                                                                                                 
Coding blocks                                                                                                                          
Coding blocks : and its length is : 13      
