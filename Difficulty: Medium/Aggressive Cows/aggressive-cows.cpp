class Solution {
  public:
    bool ispossible(int mid,vector <int> &stalls, int k){
        int placed = 1;
        int firstplaced = stalls[0];
        
        for(int i=1;i<stalls.size();i++){
            if(stalls[i]-firstplaced>=mid){
                placed++;
                firstplaced = stalls[i];
                if(placed==k){
                    return true;
                }
            }
        }
        return false;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        sort(stalls.begin(),stalls.end());
        
        int st = 1;
        int end = stalls[stalls.size()-1]-stalls[0];
        int ans;
        
        while(st<=end){
            
            int mid = st + (end-st)/2;
            
            if(ispossible(mid,stalls,k)){
                ans = mid;
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
        return ans;
    }
};