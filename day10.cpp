#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> Anagrams(vector<string>& strs) {
    unordered_map<string,vector<string>> mp;//store each word and its anagrams
    for(auto it:strs){
        string s= it;
        sort(s.begin(),s.end());//all anagrams
        mp[s].push_back(it);
    }
    vector<vector<string>> ans;
    for(auto it:mp){
        ans.push_back(it.second);
    }
    return ans;
}

int main(){
    vector<string> s={"eat","tea","tan","ate","nat","bat"};
	vector<vector<string>> ans = Anagrams(s);
    for(auto it:ans){
        cout<<"{ ";
        for(auto p:it){
            cout<<p<<" ";
        }
        cout<<"}"<<endl;
    }
    return 0;
}