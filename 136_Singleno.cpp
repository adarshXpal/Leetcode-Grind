#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int singleNumber(vector<int>&nums){
		int temp=0;
		for(int i=0;i<nums.size();i++){
			temp^=nums[i];
		}
		return temp;
	}
};

int main(){
	Solution s1;
	vector<int>nums={2,2,4,1,6,4,1,7,7,8,8};
	cout<<s1.singleNumber(nums);
return 0;
}
