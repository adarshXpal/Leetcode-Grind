#include<bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
	void setZeroes(vector<vector<int>>& matrix) {
		int m=matrix.size();
		int n=matrix[0].size();
		vector<int>rows(m,0);
		vector<int>columns(n,0);
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(matrix[i][j]==0){
					rows[i]=1;
					columns[j]=1;
				}
			}
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(rows[i]||columns[j]){
					matrix[i][j]=0;
				}
			}
		}
    }
};

int main(){
	Solution s1;
	vector<vector<int>>matrix {
		{0,1,2,0},
		{3,4,5,2},
		{1,3,1,5,}
	};
	s1.setZeroes(matrix);
	cout<<"The Result Matrix is :: \n";
	for(int i=0;i<matrix.size();i++){
		for(int j=0;j<matrix[i].size();j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<"\n";
	}
return 0;
}
