#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	void twoSum(vector<int>&nums,int target){
		map<int,int>ans;
		for(int i=0;i<nums.size();i++){
			if(ans.count(target-nums[i])){
				cout<<ans[target-nums[i]]<<" "<<i;
			}
			ans[nums[i]]=i;
		}
	}
};

int main(){
	Solution s1;
	vector<int>nums={2,7,11,15};
	int target=9;
	s1.twoSum(nums,target);
return 0;
}
