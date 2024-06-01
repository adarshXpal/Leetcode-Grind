#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string oddEven(string s) {
		map<char,int>mp;
		for(int i=0;i<s.length();i++){
			mp[s[i]]++;
		}
		int i=1,x=0,y=0;
		for(auto it:mp){
			if(it.second%2==0&&i%2==0){
				x+=it.second;
			}
			else if(it.second%2!=0&&i%2!=0){
				y+=it.second;
			}
			i++;
		}
		if((x+y)%2==0)return "EVEN";
		else return "ODD";
	}
};
int main(){
	Solution s1;
	string s;
	getline(cin,s);
	cout<<s1.oddEven(s);
	
return 0;
}
