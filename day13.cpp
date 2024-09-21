#include<bits/stdc++.h>
using namespace std;

void fun(string s,int l,int r,int &st,int end,int &maxLength,int n){
    while(l>=0&&r<n){
        if(s[l]==s[r]){
            l--;
            r++;
        }
        else{
            break;
        }
    }
    int len=r-l-1;
    if(len>maxLength){
        maxLength=len;
        st=l+1;
        end=r-1;
    }
}
string longestPalindrome(string s) {
    int n=s.length();
    if(n<=1){ //edge case
        return s;
    }
    int st=0,end=0;
    int maxLength=1; //as 1 length string always palindrome so
    //odd length 
    for(int i=0;i<n;i++){
        fun(s,i,i,st,end,maxLength,n);
    }
    //even length
    for(int i=0;i<n;i++){
        fun(s,i,i+1,st,end,maxLength,n);
    }
    return s.substr(st,maxLength);
}
int main(){
    string s="babad";
    cout<<longestPalindrome(s)<<endl;
    return 0;
}