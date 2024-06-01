#include <algorithm>
#include<bits/stdc++.h>
#include <climits>
#include <vector>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
		int ans=1;int maxel=INT_MIN;
        if(nums.size()==0)return 0;
		sort(nums.begin(),nums.end());
		for(int i=0;i<nums.size()-1;i++){
			if(abs(nums[i]-nums[i+1])==1){
				ans++;
				maxel=max(maxel,ans);
			}
            else if(nums[i]-nums[i+1]==0){
                continue;
            }
			else{
				ans=1;
			}	
		}
        if(maxel==INT_MIN)return 1;
		return maxel;
	}
};

int main(){
	Solution s1;
	int n;
	cin>>n;
	vector<int>nums;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		nums.push_back(temp);
	}
	cout<<s1.longestConsecutive(nums);
	
return 0;
}
