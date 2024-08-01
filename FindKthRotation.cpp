#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int ans=0;
        int temp=INT_MAX;
        int low=0;
        int high=arr.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]<temp){
                temp=min(temp,arr[mid]);
                ans=mid;
            }
            if(arr[low]<=arr[mid]){
				if(arr[low]<temp)ans=low;
                temp=min(temp,arr[low]);
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans;
    }
};
int main(){
	Solution s1;
	vector<int>arr={14,17,22,41,10};
	cout<<s1.findKRotation(arr);
return 0;
}
