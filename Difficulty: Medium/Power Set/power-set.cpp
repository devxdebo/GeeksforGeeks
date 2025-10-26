class Solution {
  public:
    void recursion(string &nums,int i, string temp, vector <string> &ans){
        if(i==nums.size()){
            ans.emplace_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        recursion(nums,i+1,temp,ans);
        temp.pop_back();
        recursion(nums,i+1,temp,ans);
    }
    vector<string> AllPossibleStrings(string &nums) {
        // Code here
        vector <string> ans;
        string temp;
        recursion(nums,0,temp,ans);
        sort(ans.begin(),ans.end());
        return ans;   
    }
};