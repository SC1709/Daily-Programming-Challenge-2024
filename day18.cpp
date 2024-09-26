#include<bits/stdc++.h>
using namespace std;

int PrintDivisors(int n){
    int count=0; //store divisors count
    for(int i=1;i*i<=n;i++){ //loop till sqrt of n as gets till sqrt(n) all divisors
        if(n%i==0){
            count++;
            if(n/i != i){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int n=997;
    cout<<PrintDivisors(n);
    return 0; 
}