#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int majorityElement(vector<int>&nums){
		int cnt=0;
		int el;
		for(int i=0;i<nums.size();i++){
			if(cnt==0){
				cnt=1;
				el=nums[i];
			}
			else if(nums[i]==el)cnt++;
			else {
			cnt--;
			}
		}
		int temp=0;
		for(auto it:nums){
			if(it==el)temp++;
		}
		if(temp>nums.size()/2){
			return el;
		}
		return -1;
	}
};

int main(){
	Solution s1;
	vector<int>nums={2,2,1,1,1,2,2};
	cout<<s1.majorityElement(nums);
return 0;
}
