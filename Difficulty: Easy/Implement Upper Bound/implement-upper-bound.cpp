class Solution {
  public:
    int upperBound(vector<int>& nums, int x) {
        // code here
        int N = nums.size();
        int st = 0;
        int end = N-1;
        int ans = N;

        while(st<=end){

            int mid = st + (end-st)/2;

            if(nums[mid]<=x){
                st = mid+1;
            }else{
                ans = mid;
                end = mid-1;
            }
        }
        return ans;
    }
};
