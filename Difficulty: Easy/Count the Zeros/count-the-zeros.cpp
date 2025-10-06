// User function template for C++

class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
        int N = arr.size();
        int st = 0;
        int end = N-1;
        int startpos = -1;
        
        while(st<=end){
            
            int mid = st + (end-st)/2;
            
            if(arr[mid]==0){
                startpos = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        
        if(startpos == -1){
            return 0;
        }else{
            
            st = 0;
            end = N-1;
            int endpos = -1;
            
            while(st<=end){
            
                int mid = st + (end-st)/2;
                
                if(arr[mid]==0){
                    endpos = mid;
                }
                st = mid+1;
            }
            
            return endpos - startpos + 1;
        }
    }
};