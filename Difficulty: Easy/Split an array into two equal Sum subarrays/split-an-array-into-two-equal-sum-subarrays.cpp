class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int N = arr.size();
        
        vector <int> prefix(N,0);
        vector <int> suffix(N,0);
        
        prefix[0] = arr[0];
        suffix[N-1] = arr[N-1];
        
        for(int i=1;i<N;i++){
            prefix[i] = arr[i]+prefix[i-1];
        }
        
        for(int i=N-2;i>=0;i--){
            suffix[i] = arr[i]+suffix[i+1];
        }
        
        if(prefix[N-2]==suffix[N-1]){
            return true;
        }else{
            for(int i=0;i<N-1;i++){
                if(prefix[i]==suffix[i+1]){
                    return true;
                }
            }
            return false;
        }
    }
};
