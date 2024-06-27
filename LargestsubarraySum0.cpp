#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
        map<int,int>mp;
        int sum=0;
        int maxlength=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==0){
                maxlength=i+1;
            }
            else{
                if(mp.find(sum) != mp.end()){
                    maxlength=max(maxlength,i-mp[sum]);
                }
                else{
                    mp[sum]=i;
                }
            }
        }
        return maxlength;
    }
};
int main(){
	Solution s1;
	vector<int>arr={15,-2,2,-8,1,7,10,23};
	int n=arr.size();
	cout<<"The length of largest sub array with sum =0 :: "<<s1.maxLen(arr, n);
	cout<<"\n";
return 0;
}
