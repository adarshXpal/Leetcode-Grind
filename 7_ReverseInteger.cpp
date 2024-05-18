#include<bits/stdc++.h>
#include <climits>
using namespace std;

class Solution {
public:
	int reverse(long int x){
		queue<int>q;
		while(x!=0){
			int temp;
			temp=x%10;
			q.emplace(temp);
			x/=10;
		}
		long int ans=0;
		while(!q.empty()){
			ans=ans*10+q.front();
			q.pop();
		}
		if(ans>INT_MAX || ans<INT_MIN) return 0;
		return ans;
	}
};

int main(){
	Solution s1;
	long int x;
	cin>>x;
	cout<<s1.reverse(x);
return 0;
}
