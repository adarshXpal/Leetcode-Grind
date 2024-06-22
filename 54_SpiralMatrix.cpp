#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> spiralOrder(vector<vector<int>>& matrix){
		vector<int> ans;
		int n = matrix.size();
		int m=matrix[0].size();
		int left=0,top=0,right=m-1,bottom=n-1;
		while(top<=bottom && left<=right){
			for(int i=left;i<=right;i++){
				ans.emplace_back(matrix[top][i]);
			}
			top++;
			for(int i=top;i<=bottom;i++){
				ans.emplace_back(matrix[i][right]);
			}
			right--;
			if(top<=bottom){
				for(int i=right;i>=left;i--){
				ans.emplace_back(matrix[bottom][i]);
			}
			bottom--;
			}
			if(left<=right){
				for(int i=bottom;i>=top;i--){
				ans.emplace_back(matrix[i][left]);
			}
			left++;
			}	
		}
		return ans;
	}
};


int main(){
	Solution s1;
	vector<vector<int>>matrix {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	
	vector<int>ans(s1.spiralOrder(matrix));
	for(auto it:ans){
		cout<<it<<" ";
	}
return 0;
}
