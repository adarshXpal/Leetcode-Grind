#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i=0,a=0,b=1;
        vector<int>ans(nums.size());
        while(i<nums.size()){
            if(nums[i]>=0){
                ans[a]=nums[i];
                a+=2;
            }else{
                ans[b]=nums[i];
                b+=2;
            }
            i++;
        }
        return ans;
    }
};
int main(){
	Solution s1;
	int n;
	cin>>n;
	vector<int>nums;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		nums.push_back(temp);
	}
	for(auto it:s1.rearrangeArray(nums)){
		cout<<it<<" ";
	}


return 0;
}
