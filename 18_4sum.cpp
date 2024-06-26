#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        set<vector<int>>st;
        for(int a=0;a<nums.size();a++){
            if(a>0 && nums[a]==nums[a-1])continue;
            for(int b=a+1;b<nums.size();b++){
				if(b>a+1 && nums[b]==nums[b-1])continue;
                int c=b+1;
                int d=nums.size()-1;
                while(c<d){
                    long long tempsum=(long long)nums[a]+(long long)nums[b]+(long long)nums[c]+(long long)nums[d];

                    if(tempsum<target){
                        c++;
                    }
                    else if(tempsum>target){
                        d--;
                    }
                    else{
                        vector<int>temp={nums[a],nums[b],nums[c],nums[d]};
                        st.insert(temp);
                        c++;
                        d--;
                        while(c<d && nums[c]==nums[c-1]){
                            c++;
                        }
                        while(c<d && nums[d]==nums[d+1]){
                            d--;
                        }
                    }
                }
            }
        }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
};
int main(){
	Solution s1;
	vector<int>nums ={1,0,-1,0,-2,2};
	int target = 0;
	vector<vector<int>>ans(s1.fourSum(nums,target));
	for(int i=0;i<ans.size();i++){
		for(int j=0;j<ans[i].size();j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<"\n";
	}

return 0;
}
