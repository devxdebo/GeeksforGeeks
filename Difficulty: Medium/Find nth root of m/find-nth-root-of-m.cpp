class Solution {
  public:
    int nthRoot(int N, int M) {
        // Code here
        int st = 0;
        int end =M;
        
        while(st<=end){

            long long mid = st + (end-st)/2;

            if(pow(mid,N)==M){
                return mid;
            }else if(pow(mid,N)<M){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }

        return -1;
    }
};