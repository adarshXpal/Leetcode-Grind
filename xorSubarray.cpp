#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int solve(vector<int>&A, int n, int B) {
		map<int,int>hashmap;
		int xo=0;int count=0;
		hashmap[0]++;
		for(int i=0;i<n;i++){
			xo^=A[i];
			int check=xo^B;
			count+=hashmap[check];
			hashmap[xo]++;
        
		}
		return count;
	}
};

int main(){
	Solution s1;
	vector<int>A ={5, 6, 7, 8, 9};
	int n=A.size();
	int B=5;
	cout<<s1.solve(A,n,B);
		
return 0;
}
