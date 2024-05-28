#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	void removeDuplicate(vector<int>&num){
		int i=0;
		int j=1;
		while(j<num.size()){
			if(num[i]==num[j]){
				j++;
			}else{
				num[i+1]=num[j];
				i++;
				j++;
			}
		}
		cout<<"The Array after removeDuplicate is :: ";
		for(int h=0;h<=i;h++){
			cout<<num[h]<<" ";
		}
	}
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
	/* cout<<s1.removeDuplicates(nums)<<endl; */
	/* for(int i=0;i<nums.size();i++){ */
	/* 	cout<<nums[i]<<" "; */
	/* } */	
	s1.removeDuplicate(nums);
return 0;
}
