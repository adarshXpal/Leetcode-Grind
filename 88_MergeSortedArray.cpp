#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left=0;
        int right=0;
        int i=0;
        if(nums1.empty()){
            for(int j=0;j<n;j++){
                nums1.push_back(nums2[j]);
            }
            return;
        }
        if(nums2.empty()){
            return;
        }
        while(i<max(nums1.size(),nums2.size())){
            if(left<nums1.size() && right<nums2.size()){
                if(nums1[left]==0){
                    swap(nums1[left],nums2[right]);
                    left++;
                    right++;
                }
                else if(nums2[right]<nums1[left]){
                    swap(nums1[left],nums2[right]);
                    left++;
                }else{
                    left++;
                }
            }
            i++;
        } 
        sort(nums1.begin(),nums1.end());
    }
};
int main(){
	Solution s1;
	vector<int>nums1={1,2,3,0,0,0};
	vector<int>nums2 = {2,5,6};
	s1.merge(nums1,nums1.size(),nums2,nums2.size());
	for(auto it:nums1){
		cout<<it<<" ";
	}
return 0;
}
