
class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        // code here
        sort(arr.begin(),arr.end());
        
        int i = 0;
        int j = 1;
        
        while(i<j && j!=arr.size()){
            
            if(arr[j]-arr[i]==x){
                return true;
            }else if(arr[j]-arr[i]>x){
                i++;
                if(i==j){
                    j++;
                }
            }else{
                j++;
            }
        }
        
        return false;
    }
};
