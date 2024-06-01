#include<bits/stdc++.h>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
		int maxi=0;
		int mini=prices[0];
		for(int i=1;i<prices.size();i++){
			int tempprofit=prices[i]-mini;
			if(tempprofit>maxi){
				maxi=tempprofit;
			}
			mini=min(prices[i],mini);
		}
		return maxi;
    }
};
int main(){
	Solution s1;
	int n;
	cin>>n;
	vector<int>prices;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		prices.push_back(temp);
	}
	cout<<s1.maxProfit(prices);
	
return 0;
}
