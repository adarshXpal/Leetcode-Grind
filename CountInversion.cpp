//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:   
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(vector<int>&arr, int n) {
		long long ans=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(arr[j]<arr[i])ans++;
			}	
		}
		return ans;
    }
};

//{ Driver Code Starts.

int main() {
	Solution s1;
	vector<int>arr={2,4,1,3,5};
	int n=arr.size();
	auto ans = s1.inversionCount(arr,n);
	cout<<ans;
}

// } Driver Code Ends
