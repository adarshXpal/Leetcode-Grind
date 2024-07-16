#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
       int low=0,high=nums.size()-1;
       while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target)return mid;
        else if(nums[mid]<target)low=mid+1;
        else high=mid-1;
       }
       return -1;

    }
};
int main(){
	Solution s1;
	vector<int>nums={2,5,7,12,45,67,68,79};
	int target=44;
	cout<<s1.search(nums,target);
return 0;
}
