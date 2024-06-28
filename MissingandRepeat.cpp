//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int>&arr, int n) {
       map<int,int>hashmap;
       sort(arr.begin(),arr.end());
	   int sum=0;int rsum=0;
	   int repeat=INT_MIN;
       for(int i=0;i<n;i++){
          hashmap[arr[i]]++;
		  sum+=arr[i];
		  rsum+=i+1;
       }
       vector<int>ans;
	   for(auto it:hashmap){
		   if(it.second==2){
			   ans.push_back(it.first);
			   repeat=it.first;
		   }
	   }
		ans.push_back(abs(rsum-(sum-repeat)));
		return ans;
    }
};

//{ Driver Code Starts.

int main() {
        vector<int> arr={2,2};
		int n=arr.size();
        Solution ob;
        auto ans = ob.findTwoElement(arr, n);
        cout << ans[0] << " " << ans[1] << "\n";
    return 0;
}
// } Driver Code Ends
