// User function Template for C++
class Solution {
  public:
    vector<vector<int> > getSubArrays(vector<int>& arr) {
        // code here
        int N = arr.size();
        
        vector <vector<int>> vec;
    
        for(int i=0;i<N;i++){
            for(int j=i;j<N;j++){
                vector <int> subarray;
                for(int k=i;k<=j;k++){
                    subarray.push_back(arr[k]);
                }
                vec.push_back(subarray);
            }
        }
        
        return vec;
    }
};