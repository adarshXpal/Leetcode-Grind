#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
	int lenOfLongSubarr(int A[],  int N, int K) {
		int maxlen=0,count=0,i=0,j=0;
		long long sum=A[0];
		while(j<N){
			while(sum>K&&i<=j){
				sum-=A[i];
				i++;
			}
			if(sum==K){
				maxlen=max(maxlen,j-i+1);
			}
			j++;
			if(j<N)sum+=A[j];
		}	
		return maxlen;
	}
};

int main(){
	Solution s1;
	int N;
	cin>>N;
	int K;
	cin>>K;
	int A[N];
	for(int i=0;i<N;i++){
		cin>>A[i];
	}
	cout<<s1.lenOfLongSubarr(A,N,K);

return 0;
}
