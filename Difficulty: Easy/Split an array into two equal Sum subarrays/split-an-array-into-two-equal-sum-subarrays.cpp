class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int N = arr.size();
        int st = 0;
        int end = N-1;
        
        if(N==1){
            return false;
        }else{
            int sum1 = arr[st];
            int sum2 = arr[end];
            
            while(st<end){
                
                if(sum1>sum2){
                    end--;
                    if(end!=st)
                        sum2 += arr[end];
                }else{
                    st++;
                    if(end!=st)
                        sum1 += arr[st];
                }
            }
            
            if(sum1==sum2){
                return true;
            }else{
                return false;
            }
        }
        
    }
};
