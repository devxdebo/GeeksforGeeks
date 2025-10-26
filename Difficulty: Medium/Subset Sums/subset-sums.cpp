class Solution {
  public:
    void partition(vector <int> &nums,int i,int j,vector <int> temp,vector <vector<int>> &ans){

        if(i>j){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        partition(nums,i+1,j,temp,ans); // select
        temp.pop_back();
        partition(nums,i+1,j,temp,ans); // not selected
    }
    vector<int> subsetSums(vector<int>& nums) {
        // code here
        int N = nums.size();
        int i = 0;
        int j = N-1;
        vector <int> temp;
        vector <vector <int>> ans;
        partition(nums,i,j,temp,ans);
        vector <int> anss;
        for(auto i: ans){
            int sum = 0;
            for(int j=0;j<i.size();j++){
                sum += i[j];
            }
            anss.push_back(sum);
        }
        return anss;
        
    }
};