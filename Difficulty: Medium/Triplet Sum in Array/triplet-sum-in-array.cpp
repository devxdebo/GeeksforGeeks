class Solution {
  public:
    bool hasTripletSum(vector<int> &nums, int target) {
        // Code Here
        sort(nums.begin(),nums.end());
        
        int N = nums.size();

        

        for(int i=0;i<N-2;i++){

            if(i>0 && nums[i]==nums[i-1])
                continue;

            int j = i+1;
            int k = N-1;

            while(j<k){

                int sum = nums[i]+nums[j]+nums[k];

                if(sum>target)
                    k--;
                else if(sum<target)
                    j++;
                else{
    
                    return true;
                }
            }
        }

        return false;
    }
};