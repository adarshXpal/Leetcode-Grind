#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findFloor(vector<long long> v, long long n, long long x) {
        int ans=-1;
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(v[mid]<=x){
                low=mid+1;
                ans=mid;
            }else high=mid-1;
        }
        return ans;
    }
};
int main(){
	Solution s1;
	vector<long long>v={1,2,8,10,11,12,19};
	long long n=v.size();
	long long x=5;
	cout<<s1.findFloor(v,n,x)<<endl;
return 0;
}
