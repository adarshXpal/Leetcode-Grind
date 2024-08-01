#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=1;
        int high=nums.size()-2;
        if(nums.size()==1)return nums[0];
        if(nums[low]!=nums[0])return nums[0];
        if(nums[high]!=nums[nums.size()-1])return nums[nums.size()-1];
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])return nums[mid];
            if((mid%2==1 && nums[mid]==nums[mid-1]) || (mid%2==0 && nums[mid]==nums[mid+1])){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return -1;
    }
};
int main(){
	Solution s1;
	vector<int>nums = {1,1,2,3,3,4,4,8,8};
	cout<<s1.singleNonDuplicate(nums);
return 0;
}
