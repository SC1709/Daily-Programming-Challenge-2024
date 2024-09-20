#include<bits/stdc++.h>
using namespace std;

bool valid(string s){
    stack<char> st;//store char
    for(char it:s){
        if(it=='(' || it=='{' || it=='['){
            st.push(it);
        }
        else{
            if(st.empty()) return false; //for open bracket no close there
            char top = st.top();
            st.pop();
            if((it==')' && top=='(') || (it=='}' && top=='{') || (it==']' && top=='[')){
                continue;
            }
            else{ //different closing bracket
                return false;
            }
        }
    }
    return st.empty();
} 

int main(){
    string s= "[{()}]";
    bool ans=valid(s);
    if(ans) cout<<"True";
    else cout<<"False";
    return 0;
}