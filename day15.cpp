#include<bits/stdc++.h>
using namespace std;

int LongestSubstring(string &s){
    int n = s.size();
    int maxlen=0;
    vector<int> hash(256,-1);// store char and its index
    int l=0,r=0;
    while(r<n){
        if(hash[s[r]]!= -1){
            if(hash[s[r]] >= l){ //check for validity of r char 
                l = hash[s[r]] + 1; //next of r
            }
        }
        int len=r-l+1;
        maxlen=max(maxlen,len);
        hash[s[r]]=r; //update hash
        r++;
    }
    return maxlen;
}
int main(){
    string s = "abcabcbb";
    cout << LongestSubstring(s) << endl;
    return 0;
}