#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> searchRange(vector<int> &nums, int target) {
    int first = -1;
    int last = -1;
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high) {
      int mid = (low + high) / 2;
      if (nums[mid] >= target) {
        if (nums[mid] == target)
          first = mid;
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    }
    if (first == -1)
      return {-1, -1};
    low = 0;
    // change git commit;
    high = nums.size() - 1;
    while (low <= high) {
      int mid = (low + high) / 2;
      if (nums[mid] <= target) {
        if (nums[mid] == target)
          last = mid;
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    }
    return {first, last};
  }
};
int main() {
  Solution s1;
  vector<int> nums = {5, 7, 7, 8, 8, 10};
  int target = 8;
  vector<int> ans = s1.searchRange(nums, target);
  for (auto it : ans) {
    cout << it << " ";
  }
  return 0;
}
