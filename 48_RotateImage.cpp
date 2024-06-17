#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	void rotate(vector<vector<int>>&matrix){
		int n=matrix.size();
		vector<vector<int>>temp(matrix);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				temp[j][n-1-i]=matrix[i][j];	
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				matrix[i][j]=temp[i][j];
			}
		}
	}	
	
};

int main(){
	Solution s1;
	vector<vector<int>>matrix {
		{5,1,9,11},
		{2,4,8,10},
		{13,3,6,7},
		{15,14,12,16}
	};
	s1.rotate(matrix);
	cout<<"The rotated 2D Matrix is ::\n";
	for(int i=0;i<matrix.size();i++){
		for(int j=0;j<matrix.size();j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	
return 0;
}
