#include<bits/stdc++.h>
using namespace std;
//using xor
int Duplicates1(vector<int> arr,int n){
    int xor1=0,xor2=0; 
    for(int i=0;i<n;i++){ 
        xor2=xor2 ^ arr[i];
        xor1=xor1 ^ (i+1);
    }
    xor2=xor2 ^ arr[n];
    return xor1 ^ xor2;
}
int Duplicates2(vector<int> arr,int n){
    int total = (n*(n+1))/2;
    int sum=0;
    for(int i=0;i<=n;i++){ //1 missing number so
        sum+=arr[i];
    }
    return sum-total;
}
int main(){
    vector<int> a={1,4,2,3,4,5,6,7,8};
    // sort(a.begin(),a.end());
    int n = a.size();
    cout<<Duplicates1(a,n-1)<<endl;
    cout<<Duplicates2(a,n-1);
    return 0;
}