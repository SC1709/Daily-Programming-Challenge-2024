#include<bits/stdc++.h>
using namespace std;
//using loop
vector<int> countPrimes(int n){
    vector<int> ans; //store prime factors
    for(int i=2;i<=n;i++){ //loop from 2 as first prime number is 2
        if(n%i==0){
            while(n%i==0){
                n=n/i;
                ans.push_back(i);
            }
        }
    }
    return ans;
}
//using sieve of eratosthenes
vector<int> countPrimes1(int n){
    vector<int> Prime(n+1); //store prime numbers till n
    for(int i=2;i<=n;i++){ //loop from 2 as first prime 
        Prime[i]=1; //assuming all prime number mark as 1
    }
    for(int i=2;i<=n;i++){ //loop from 2 as first prime 
        if(Prime[i]==1){ //if prime
            for(int j=2*i;j<=n;j+=i){
                Prime[j]=0; //mark all multiple of j as 0
            }
        }
    }
	vector<int> ans; //store prime factor
    for(int i=2;i<=n;i++){
        if(Prime[i]==1){
            while(n%i==0){
                n=n/i;
                ans.push_back(i);
            }
        }
    }
    return ans;
}
int main(){
    int n=123456;
    vector<int> ans=countPrimes(n);
    vector<int> ans1=countPrimes1(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0; 
}