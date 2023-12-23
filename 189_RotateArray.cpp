#include<bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
	void rotate(vector<int>&nums,int k){
		vector<int>temp(nums.size());
		for(int i=0;i<nums.size();i++){
			temp[(i+k)%nums.size()]=nums[i];
		}
		for(int j=0;j<nums.size();j++){
			nums[j]=temp[j];
		}
	}
};

int main(){
	Solution s1;
	vector<int>nums={12,33,43,122};
	int k;
	cin>>k;
	s1.rotate(nums,k);
	for(int i=0;i<nums.size();i++){
		cout<<nums[i]<<" ";
	}	
return 0;
}
