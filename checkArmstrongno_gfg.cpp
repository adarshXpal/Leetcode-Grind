#include<bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
int x;
cin>>x;
int t=x;
int a=x;
int count=0;
while(a!=0){
	count++;
	a/=10;
}
int ans=0;
while(x!=0){
	ans+=pow(x%10,count);
	x/=10;
}
if(ans==t){
	cout<<"True"<<endl;
}else{cout<<"False"<<endl;}

return 0;
}

