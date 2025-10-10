class Solution {
  public:
    int missingNum(vector<int>& nums) {
        // code here
        int N = nums.size();
        int ans = N+1;
        
        for(int i=0;i<N;i++){
            while(nums[i]!=i+1){
                if(nums[i]>N)
                    break;
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        
        for(int i=0;i<N;i++){
            if(nums[i]!=i+1){
                ans = i+1;
                break;
            }
        }
        
        return ans;
    }
};