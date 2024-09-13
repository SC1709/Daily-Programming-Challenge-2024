#include<bits/stdc++.h>
using namespace std;

vector<int> Leader(vector<int>& arr, int n){
	stack<int> st;
	vector<int> ans;
	if(n == 0){
		return {};
	}
	ans.push_back(arr[n-1]);
	st.push(arr[n-1]);
	for(int i=n-2;i>=0;i--){
		if(arr[i] > st.top()){
			ans.push_back(arr[i]);
            st.push(arr[i]);
		}
	}
	reverse(ans.begin(), ans.end());
	return ans;
}

int main(){
    vector<int> arr={7,10,4,10,6,5,2};
    vector<int> ans= Leader(arr,arr.size());
    cout << "The Leaders array is: " << "\n";
    for (int i = 0; i < ans.size(); i++) {
        if(i==ans.size()-1) cout<<ans[i];
        else cout << ans[i] << " , ";
    }
    return 0;
}