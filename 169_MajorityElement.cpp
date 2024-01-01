#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int majorityElement(vector<int>&nums){
		map<int,int>mp;
		for(int i=0;i<nums.size();i++){
			mp[nums[i]]++;
		}
		for(auto i:mp){
			if(i.second>nums.size()/2){
				return i.first;
			}
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
