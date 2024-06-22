#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int subarraySum(vector<int>&nums,int k){
		int count=0,presum=0;
		map<int,int>mp;
		mp[0]=1;
		for(auto it:nums){
			presum+=it;
			int remove=presum-k;
			count+=mp[remove];
			mp[presum]++;
		}
		return count;
	}
};

int main(){
	Solution s1;
	vector<int>nums={1,2,3};
	int k=3;
	cout<<s1.subarraySum(nums,k)<<endl;
return 0;
}
