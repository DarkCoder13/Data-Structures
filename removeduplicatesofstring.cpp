//remove consecutive duplicates of string e.g ccoooding-->coding
#include<iostream>
#include<cstring>
using namespace std;
void removeDuplicates(char a[]){
    int l=strlen(a);
    if(l==1 || l==0){
        return ;
    }
    int previous=0;
    int current;
    for(current=1;current<l;current++){
        if(a[current]!=a[previous]){
            previous++;
            a[previous]=a[current];
        }
    }
    a[previous+1]='\0';
    return ;
}
int main(){
    char a[1000];
    cin.getline(a,1000);
    removeDuplicates(a);
    cout<<a<<endl;
    return 0;
}