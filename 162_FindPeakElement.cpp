#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       int low=1;
       int high=nums.size()-2;
       if(nums.size()>=2){
        if(nums[0]>nums[1]){
        return 0;
        }
       }
       
       while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
                return mid;
            }
            if(nums[mid]>nums[mid-1]){
                low=mid+1;
            }else{
                high=mid-1;
            }
       } 
       return nums.size()-1;
    }
};
int main(){
	Solution s1;
	vector<int>nums={1,2,1,3,5,6,4};
	cout<<"The Index of the Peak Element is :: "<<s1.findPeakElement(nums);
return 0;
}
