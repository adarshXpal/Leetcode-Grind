#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int removeDuplicates(vector<int>&nums){
		set<int>s;
		for(int i=0;i<nums.size();i++){
			s.emplace(nums[i]);
		}
		int k=s.size();
		int d=0;
		for(auto j=s.begin();j!=s.end();j++){
			nums[d]=*j;
			d++;
		}
		return k;
	}
};

int main(){
	Solution s1;
	vector<int>nums={11,11,14,23,23,23,56,56,56,56};
	cout<<s1.removeDuplicates(nums)<<endl;
	for(int i=0;i<nums.size();i++){
		cout<<nums[i]<<" ";
	}	
return 0;
}
