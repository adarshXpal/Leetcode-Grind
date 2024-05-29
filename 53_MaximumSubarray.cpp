#include <algorithm>
#include<bits/stdc++.h>
#include <climits>
using namespace std;

class Solution {
public:
	int maxSubArray(vector<int>&nums){
		int maxel=INT_MIN;
		int sum=0;
		int i=0;
		int start=0;
		int end;
		while(i<nums.size()){
			int temp=sum+nums[i];
			if(temp<0){
				i++;
				sum=0;
				start=i;
			}
			else{
				sum=temp;
				if(sum>maxel)end=i;
				maxel=max(maxel,sum);
				i++;
			}
		}
		if(maxel==INT_MIN){
			int tem=maxel;
			for(auto it:nums){
				if(nums[i]>tem)tem=nums[i];
			}
			return tem;
		}
		cout<<"The Max SubArray Is :: ";
		for(int i=start;i<=end;i++){
			cout<<nums[i]<<" ";
		}
		cout<<endl;
		return maxel;
	}	
};

int main(){
	Solution s1;
	vector<int>nums={-2,1,-3,4,-1,2,1,-5,4};
	cout<<s1.maxSubArray(nums);

return 0;
}
