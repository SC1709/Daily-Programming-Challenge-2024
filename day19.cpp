#include<bits/stdc++.h>
using namespace std;

int postFixEvaluation(vector<string> &s){
    stack<int> st; //store result of operations
    for(auto it:s){
        if(it== "+" || it== "-" || it== "*" || it== "/" || it== "^"){
            int val1 = st.top();
            st.pop();
            int val2 = st.top();
            st.pop();
            char ch=it[0]; //as given every thing in string so take its char for operation
            switch(ch){
            case '+':
                st.push(val2 + val1);
                break;
            case '-':
                st.push(val2 - val1);
                break;
            case '*':
                st.push(val2 * val1);
                break;
            case '/':
                st.push(val2 / val1);
                break;
            // case '^':  //handle case for ^ 
            //     st.push(pow(val2,val1));
            //     break;
            default:
                return -1;
                break;
            }
        }
        else{
            st.push(stoi(it)); //convert string to int and push
        }
    }
    return st.top();
}

int main(){
    vector<string> s={"3","4","2","*","1","5","-","2","3","^","^","/","+"};
    cout<<postFixEvaluation(s);
    return 0; 
}