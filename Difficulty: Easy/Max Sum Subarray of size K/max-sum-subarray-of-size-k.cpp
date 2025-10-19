class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int i = 0;
        int j = 0;
        int sum = 0;
        int maxsum = INT_MIN;
        int N = arr.size();
        
        while(i<=j && j!=N){
            if(j-i+1<=k){
                sum += arr[j];
                if(sum>maxsum){
                    maxsum = sum;
                }
                j++;
            }else{
                sum -= arr[i];
                i++;
                sum += arr[j];
                j++;
            }
            if(sum>maxsum){
                maxsum = sum;
            }
        }
        return maxsum;
    }
};