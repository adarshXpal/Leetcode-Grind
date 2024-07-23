#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lowerbound(vector<int>&nums,int target){
        int low=0;
        int high=nums.size()-1;
        int ans=nums.size();
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=target){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
    int upperbound(vector<int>&nums,int target){
        int low=0;
        int high=nums.size()-1;
        int ans=nums.size();
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>target){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans-1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums[lowerbound(nums,target)]!=target || lowerbound(nums,target)==nums.size()){
            return {-1,-1};
        }
        return {lowerbound(nums,target),upperbound(nums,target)};
    }
};
int main(){
	Solution s1;
	vector<int>nums={1};
	int target = 1;
	vector<int>ans = s1.searchRange(nums,target);
	for(auto it:ans){
		cout<<it<<" ";
	}
return 0;
}
