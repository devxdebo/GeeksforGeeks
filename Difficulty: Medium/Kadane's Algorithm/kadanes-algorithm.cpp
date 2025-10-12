class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int N = arr.size();
        int maxsum = INT_MIN;
        int sum = 0;
        
        for(int i=0;i<N;i++){
            sum += arr[i];
            if(sum>maxsum){
                maxsum = sum;
            }
            if(sum<0){
                sum = 0;
            }
            
        }
        
        return maxsum;
    }
};