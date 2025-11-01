// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &nums) {
        // code here
        reverse(nums.begin(),nums.end()-1);
        reverse(nums.begin(),nums.end());
    }
};