class Solution {
  public:
    bool ispossible(int maxdist,vector <int> &stalls, int k){
        int issetup = stalls[0];
        int numofcows = 1;
        for(int i=1;i<stalls.size();i++){
            if(stalls[i]-issetup >= maxdist){
                numofcows++;
                issetup = stalls[i];
                if(numofcows>=k){
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
        int end = *(max_element(stalls.begin(),stalls.end()))-*(min_element(stalls.begin(),stalls.end()));
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