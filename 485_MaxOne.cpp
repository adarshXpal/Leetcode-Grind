#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int findMaxConsecutiveOnes(vector<int>&nums){
		int max=0;
		int count=0;
		for(int i=0;i<nums.size();i++){
			if(nums[i]==1){
				count++;
				if(count>max){
					max=count;
				}
			}
			if(nums[i]==0){
				count=0;
			}
		}
		return max;
	}
};

int main(){
	Solution s1;
	vector<int>nums={0,0,1,1,0,1,1,0,0,1,1,1,0,1};
	cout<<s1.findMaxConsecutiveOnes(nums)<<endl;

return 0;
}
