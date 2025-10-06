class Solution {
  public:
    int cubeRoot(int n) {
        // code here
        int st = 0;
        int end = n;
        int ans;
        
        while(st<=end){
            
            long long mid = st + (end-st)/2;
            
            if(mid*mid*mid==n){
                return mid;
            }else if(mid*mid*mid>n){
                end = mid-1;
            }else{
                ans = mid;
                st = mid+1;
            }
        }
        
        return ans;
    }
};