#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int missingNumber(vector<int>&nums){
		int sumall=0;
		int sumnums=0;
		for(int i=0;i<=nums.size();i++){
			sumall+=i;
		}
		for(int i=0;i<nums.size();i++){
			sumnums+=nums[i];
		}
	return sumall-sumnums;
	}
};

int main(){
	Solution s1;
	vector<int>nums={0,1,3,4,5,6};
	cout<<s1.missingNumber(nums);
return 0;
}
