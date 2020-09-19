//rread a string/sentence/paragraph and check whether it is pallindromic or not
#include<iostream>
#include<cstring>
using namespace std;
 bool isPallindrome(char a[]){
     int l=strlen(a);
     int i=0;
     int j=l-1;
     while(i<j){
         if(a[i]==a[j]){
             i++;
             j--;
         }
         else{
             return false;
         }
     }
     return true;
 }
 int main(){
     char a[1000];
     cin.getline(a,1000);
     if(isPallindrome(a)){
         cout<<"Yes Pallindromic string."<<endl;
     }
     else{
         cout<<"Not Pallindromic string."<<endl;
     }
     return 0;
 }