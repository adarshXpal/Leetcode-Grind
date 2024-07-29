#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
		int low=0;
		int high=n-1;
		int first=-1;
		int last=-1;
		while(low<=high){
			int mid=(low+high)/2;
			if(arr[mid]>=x){
				if(arr[mid]==x){
					first=mid;
				}
				high=mid-1;
			}else{
				low=mid+1;
			}
		}
		if(first==-1)return 0;
		low=0;
		high=n-1;
		while(low<=high){
			int mid=(low+high)/2;
			if(arr[mid]<=x){
				if(arr[mid]==x)last=mid;
				low=mid+1;
			}
			else{
				high=mid-1;
			}
		}
		return last-first+1;
	}
};
int main(){
	Solution s1;
	int n=7;
	int x=2;
	int arr[]={1, 1, 2, 2, 2, 2, 3};
	cout<<s1.count(arr,n,x);
	
return 0;
}
