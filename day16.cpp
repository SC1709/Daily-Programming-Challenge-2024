#include<bits/stdc++.h>
using namespace std;

long long int gcd(long long int a,long long int b){
    while(b!=0){ //loop till b not 0
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a; //as a store ans
}

long long int lcm(long long int a,long long int b){
    return (a*b)/gcd(a,b); // as a*b = lcm(a,b) * gcd(a,b)
}
int main(){
    long long int a,b;
    cin>>a>>b;
    cout<<lcm(a,b)<<endl;
    return 0;
}