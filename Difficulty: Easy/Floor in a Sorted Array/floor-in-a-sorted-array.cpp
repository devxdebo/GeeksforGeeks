class Solution {
  public:
    int findFloor(vector<int>& nums, int x) {
        // code here
        int N = nums.size();
        int st = 0;
        int end = N-1;
        int ans = -1;
        
        while(st<=end){
            
            int mid = st + (end-st)/2;
            
            if(nums[mid]<=x){
                ans = mid;
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
        
        return ans;
    }
};
