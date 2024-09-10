#include<bits/stdc++.h>
using namespace std;

//using xor
int missingNumber(vector<int> arr,int n){
    int xor1=0,xor2=0; 
    for(int i=0;i<n-1;i++){ 
        xor2=xor2 ^ arr[i];
        xor1=xor1 ^ (i+1);
    }
    xor1=xor1 ^ n;
    return xor1 ^ xor2;
}
int missing(vector<int> arr,int n){
    int total = (n*(n+1))/2;
    int sum=0;
    for(int i=0;i<n-1;i++){ //1 missing number so
        sum+=arr[i];
    }
    return total-sum;
}
int main(){
    vector<int> arr = {1,2,4,5};
    int n= arr.size();
    int ans = missing(arr,n);//assume array is sorted
    cout<<ans<<endl;
    cout<<missingNumber(arr,n);
    return 0;
}