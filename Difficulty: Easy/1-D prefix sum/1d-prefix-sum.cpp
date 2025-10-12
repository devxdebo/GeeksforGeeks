class Solution {
  public:
    vector<int> prefSum(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector <int> hash(n);
        hash[0] = arr[0];
    
        for(int i=1;i<n;i++){
            hash[i] = arr[i] + hash[i-1];
        }
        
        return hash;
    }
};