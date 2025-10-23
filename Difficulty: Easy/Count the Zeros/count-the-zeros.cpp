// User function template for C++

class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
        
        int N = arr.size();
        int st = 0;
        int end = N-1;
        int firstpos = -1;
        
        while(st<=end){
            
            int mid = st + (end-st)/2;
            
            if(arr[mid]==0){
                firstpos = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        if(firstpos == -1){
            return 0;
        }else{
            
            int lastpos = -1;
            st = 0;
            end = N-1;
            
            while(st<=end){
                int mid = st + (end-st)/2;
                
                if(arr[mid]==0){
                    lastpos = mid;
                    
                }
                st = mid+1;
            }
            
            return lastpos-firstpos+1;
        }
    }
};