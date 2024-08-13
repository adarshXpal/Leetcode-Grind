#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        double ans=INT_MIN;
        double prefix=1;
        double suffix=1;
       for(int i=0;i<nums.size();i++){
            prefix*=nums[i];
            suffix*=nums[nums.size()-1-i];
            ans=max({ans,prefix,suffix});
            if(nums[i]==0){
                prefix=1;
            }
            if(nums[nums.size()-1-i]==0){
                suffix=1;
            }
       } 
       return ans;
    }
};

int main(){
	Solution s1;
	vector<int>nums = {1,0,-1,2,3,-5,-2};
	cout<<"The Maximum Product is :: "<<s1.maxProduct(nums);
return 0;
git clone https://github.com/NvChad/starter ~/.config/nvim && nvim}
