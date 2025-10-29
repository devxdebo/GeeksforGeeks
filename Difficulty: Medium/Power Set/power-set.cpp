class Solution {
  public:
    void helper(string &nums,int i,string &temp,vector <string> &ans){

        if(i==nums.size()){
            ans.emplace_back(temp);
            return;
        }

        temp.push_back(nums[i]);
        helper(nums,i+1,temp,ans);
        temp.pop_back();
        helper(nums,i+1,temp,ans);

    }
    
    vector<string> AllPossibleStrings(string s) {
        // Code here
        string temp;
        vector <string> ans;
        helper(s,0,temp,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};