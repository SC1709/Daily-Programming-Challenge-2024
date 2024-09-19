#include<bits/stdc++.h>
using namespace std;

void permutation(string &s,int index,int n,set<string> &ans){
    if(index==n-1){
        ans.insert(s);
        return;
    }
    for(int i=index;i<n;i++){
        swap(s[index],s[i]);//change each index with other possibility
        permutation(s,index+1,n,ans);
        swap(s[index],s[i]); // backtrack
    }
} 

int main(){
    string s= "abc";
    int n=s.size();
    int indx=0;
    set<string> ans;
    permutation(s,indx,n,ans);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}