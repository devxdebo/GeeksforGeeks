class Solution {
public:
    void recursion(vector<int> &nums, int i, bool &ans, int sum, int target) {
        if (ans) return;               // stop early if already found
        if (sum == target) {           // found subset
            ans = true;
            return;
        }
        if (i == nums.size() || sum > target) return;

        // include current element
        recursion(nums, i + 1, ans, sum + nums[i], target);
        // exclude current element
        recursion(nums, i + 1, ans, sum, target);
    }

    bool isSubsetSum(vector<int>& arr, int sum) {
        bool ans = false;
        recursion(arr, 0, ans, 0, sum);
        return ans;
    }
};
