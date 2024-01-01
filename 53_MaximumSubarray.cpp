#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int maxSubArray(vector<int>&nums){
		int maxsum=nums[0];
		int countsum=0;
		for(int i=0;i<nums.size();i++){
			if(countsum<0){
				countsum=0;
			}
			countsum=countsum+nums[i];
			maxsum=max(maxsum,countsum);
		}
		return maxsum;
	}	
};

int main(){
	Solution s1;
	vector<int>nums={-2,1,-3,4,-1,2,1,-5,4};
	cout<<s1.maxSubArray(nums);

return 0;
}
