#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int minJumps(int arr[], int n){
        auto it = arr;
		int count=1;
        while(*(it)<arr+(n-1)-it){
            auto temp = max_element(it,it+*(it)+1);
			it=temp;
			count++;
		}
		return count;
    }
};


int main(){
	Solution s1;
	int n;
	cout<<"Enter the Size of Array :: ";
	cin>>n;
	cout<<endl;
	int arr[n];
	cout<<"Enter the elements of Array :: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"The Minimum No. Of Jumps :: "<<s1.minJumps(arr,n)<<endl;
	
return 0;
}
