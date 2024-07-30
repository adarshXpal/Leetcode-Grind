#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
       int low=0;
       int high=nums.size()-1;
       int ans=INT_MAX;
       while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]<ans)ans=nums[mid];
            if(nums[low]<=nums[mid]){
                ans=min(ans,nums[low]);
                low=mid+1;
            }
            if(nums[mid]<=nums[high]){
                high=mid-1;
            }
       }
       return ans; 
    }
};
int main(){
	Solution s1;
	vector<int>nums{4,5,6,7,1,2};
	cout<<s1.findMin(nums)<<endl;
return 0;
}
