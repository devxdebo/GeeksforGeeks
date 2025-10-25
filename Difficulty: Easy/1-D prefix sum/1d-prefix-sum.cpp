class Solution {
  public:
    vector<int> prefSum(vector<int> &arr) {
        // code here
        vector <int> hash(arr.size(),0);
        
        hash[0] = arr[0];
        
        for(int i=1;i<arr.size();i++){
            hash[i] = arr[i]+hash[i-1];
        }
        
        return hash;
    }
};