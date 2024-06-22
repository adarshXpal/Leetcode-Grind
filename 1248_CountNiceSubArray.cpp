#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int numberOfSubarrays(vector<int>&nums,int k){
		for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)nums[i]=0;
            else nums[i]=1;
        }
        map<int,int>mp;
        mp[0]=1;
        int count=0,sum=0;
        for(auto it:nums){
            sum+=it;
            int temp=sum-k;
            count+=mp[temp];
            mp[sum]++;
        }
        return count;
	}

};

int main(){
	Solution s1;
	vector<int>nums={1,1,2,1,1};
	int k=3;
	cout<<s1.numberOfSubarrays(nums,k);
return 0;
}
