#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>st;
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int k=nums.size()-1;
            if(i>0 && nums[i]==nums[i-1])continue;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    vector<int>temp={nums[i],nums[j],nums[k]};
                    st.insert(temp);
                    j++;
                    k--;
                    while(nums[j]==nums[j-1] && j<k){
                        j++;
                    }

                    while(nums[k]==nums[k+1] && j<k){
                        k--;
                    }
                    
                }
                else if(sum>0){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
};
int main(){
	Solution s1;
	vector<int>nums = {-1,0,1,2,-1,-4};
	vector<vector<int>>ans(s1.threeSum(nums));
	for(int i=0;i<ans.size();i++){
		for(int j=0;j<3;j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
return 0;
}
