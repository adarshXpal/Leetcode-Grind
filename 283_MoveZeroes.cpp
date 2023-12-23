#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	void moveZeroes(vector<int>&nums){
		int j=-1;
		for(int i=0;i<nums.size();i++){
			if(nums[i]==0){
				j=i;
				break;
			}
		
		}
		if(j>=0){
			for(int i=j+1;i<nums.size();i++){
				if(nums[i]!=0){
					swap(nums[j],nums[i]);
					j++;
				}
		    }

		}
	}
};

int main(){
	Solution s1;
	vector<int>nums={0,12,2,0,0,0,3,4,0,5,6,4,0};
	s1.moveZeroes(nums);
	for(int i=0;i<nums.size();i++){
		cout<<nums[i]<<" ";
	}
	return 0;
}
