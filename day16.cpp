#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    while(b!=0){ //loop till b not 0
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a; //as a store ans
}

int lcm(int a,int b){
    return (a*b)/gcd(a,b); // as a*b = lcm(a,b) * gcd(a,b)
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b)<<endl;
    return 0;
}