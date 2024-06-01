#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> leaders(int a[], int n){
        vector<int>ansleader;
		int maxright=a[n-1];
		ansleader.push_back(a[n-1]);
		for(int i=n-1;i>0;i--){
			if(a[i-1]>a[i]&&a[i-1]>=maxright){
				ansleader.push_back(a[i-1]);
				maxright=a[i-1];
			}
			else{
				continue;
			}
		}
		for(int i=0;i<ansleader.size()/2;i++){
			swap(ansleader[i],ansleader[ansleader.size()-1-i]);
		}
		return ansleader;
	}
};
int main(){
	Solution s1;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(auto it:s1.leaders(a,n)){
		cout<<it<<" ";
	}

return 0;
}
