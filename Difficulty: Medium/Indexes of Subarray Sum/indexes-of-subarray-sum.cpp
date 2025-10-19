class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int i = 0;
        int j = 0;
        int sum = arr[0];
        int N = arr.size();
        
        
        while(i<=j && j!=N){
            
            if(sum<target){
                j++;
                sum += arr[j];
            }else if(sum>target){
                sum -= arr[i];
                i++;
                if(i>j){
                    j++;
                    sum += arr[j];
                }
            }else{
                return {i+1,j+1};
            }
        }
        return {-1};
    }
};