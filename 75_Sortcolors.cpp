#include <array>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	void sortColors(vector<int>&nums){
		int low=0;
		int mid=0;
		int high=nums.size()-1;
		while(mid<=high){
			if(nums[mid]==0){
				swap(nums[mid],nums[low]);
				low++;
				mid++;
			}
			else if (nums[mid]==1) {
				mid++;	
			}else if(nums[mid]==2){
				swap(nums[mid],nums[high]);
				high--;
			}
		}
	}
};
int main(){
	Solution s1;
	vector<int>nums={2,0,2,1,1,0};
	s1.sortColors(nums);
	for(int i=0;i<nums.size();i++){
		cout<<nums[i]<<" ";
	}
	
return 0;
}
