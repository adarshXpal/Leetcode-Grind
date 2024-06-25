#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> generateRows(int row){
		long long ans=1;
		vector<int>ansrow;
		ansrow.push_back(ans);
		for(int col=1;col<row;col++){
			ans*=row-col;
			ans/=col;
			ansrow.push_back(ans);
		}
		return ansrow;
	}
	vector<vector<int>> generate(int numRows){
		vector<vector<int>>ans;
		for(int i=1;i<=numRows;i++){
			ans.push_back(generateRows(i));
		}
		return ans;
	}
};

int main(){
	Solution s1;
	int numRows;
	cout<<"Enter The NumRows :: ";
	cin>>numRows;
	cout<<endl;

	vector<vector<int>>pascaltriangle(s1.generate(numRows));
	for(int i=0;i<pascaltriangle.size();i++){
		for(int j=0;j<pascaltriangle[i].size();j++){
			cout<<pascaltriangle[i][j]<<" ";
		}
		cout<<endl;
	}
return 0;
}
