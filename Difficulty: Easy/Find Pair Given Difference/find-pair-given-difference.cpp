
class Solution {
  public:
    bool findPair(vector<int> &nums, int target) {
        // code here
        int N = nums.size();
        map <int,int> mpp;

        for(int i=0;i<N;i++){
            mpp.emplace(nums[i],i);
        }

        for(int i=0;i<N;i++){
            if(mpp.find(target+nums[i])!=mpp.end() && mpp[target+nums[i]]!=i){
                return true;
            }
        }
        return false;
    }
};
