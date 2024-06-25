#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       unordered_map<int,int>hash;
       for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
       } 
       vector<int>ans;
       for(auto i=hash.begin();i!=hash.end();i++){
        if(i->second>(nums.size()/3)){
            ans.push_back(i->first);
            if(ans.size()==2){
                break;
            }
        }
       }
       return ans;
    }
};

int main(){
	Solution s1;
	int n;
	cout<<"Enter the size of the array :: ";
	cin>>n;
	cout<<endl;
	vector<int>nums;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		nums.push_back(temp);
	}
	vector<int>ans(s1.majorityElement(nums));
	for(auto it:ans){
		cout<<it<<" ";
	}

return 0;
}
