#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> arr1, vector<int> arr2, int n, int m) {
    int left = n - 1; //at last eg 1,3,5,7 
    int right = 0;
    while (left >= 0 && right < m) {
        if (arr1[left] > arr2[right]) {
            swap(arr1[left], arr2[right]);
            left--;
            right++;
        }
        else {
            break;
        }
    }
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
}
int main(){
    vector<int> arr1={1,3,5,7};
    vector<int> arr2={2,4,6,8};
    int n = arr1.size(), m = arr2.size();
    merge(arr1, arr2, n, m);
    cout << "The merged arrays are: " << "\n";
    cout << "\narr1[] = ";
    for (int i = 0; i < n; i++) {
        if(i==n-1) cout<<arr1[i];
        else cout << arr1[i] << " , ";
    }
    cout << "\narr2[] = ";
    for (int i = 0; i < m; i++) {
        if(i==m-1) cout<<arr2[i];
        else cout << arr2[i] << " , ";
    }
    return 0;
}